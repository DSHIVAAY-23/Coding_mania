// SPDX-License-Identifier: MIT
pragma solidity 0.8.20;

interface IERC20 {
    function totalSupply() external view returns (uint256);

    function balanceOf(address account) external view returns (uint256);

    function transfer(address recipient, uint256 amount)
        external
        returns (bool);

    function allowance(address owner, address spender)
        external
        view
        returns (uint256);

    function approve(address spender, uint256 amount) external returns (bool);

    function transferFrom(address sender, address recipient, uint256 amount)
        external
        returns (bool);

    event Transfer(address indexed from, address indexed to, uint256 amount);
    event Approval(
        address indexed owner, address indexed spender, uint256 amount
    );
}

contract Vault{
     IERC20 public immutable token;
     uint public totalsupply;
     mapping (address=>uint) public balanceOf;


     constructor(address _token){
        token = IERC20(_token);
     }

     function _mint(address _to,uint _amount)private{
        totalsupply += _amount;
        balanceOf[_to] +=_amount;

     }

 function _burn(address _from,uint _amount)private{
        totalsupply -= _amount;
        balanceOf[_from] -=_amount;

     }

     function _deposit(uint _amount)external{
        //a=amount
        //b=balnce of token before deposit
        //t = totalsupply
        //s = shares to mint


        // s=aT/b
        uint shares;
        if(totalsupply==0){
            shares =_amount;
        }

        else{
            shares = (_amount*totalsupply)/token.balanceOf(address(this));

        }
        _mint(msg.sender, shares);
        token.transferFrom(msg.sender,address(this),_amount);
     }

function withdraw(uint _shares)external {
    uint amount = (_shares*token.balanceOf(address(this)))/totalsupply;
    _burn(msg.sender,_shares);
    token.transfer(msg.sender,amount);
}

}