// SPDX-License-Identifier: UNLICENSED
pragma solidity ^0.8.24;
import "hardhat/console.sol";

contract Token{
    string public name = "divyank";
    string public symbol = "D";
    uint public totalsupply = 10000000;
    address public owner;
    mapping(address=>uint) balances;

    constructor(){
        balances[msg.sender] = totalsupply;
        owner = msg.sender;
    }
    function transfer(address to,uint amount ) external{
        console.log("**owner ballance",balances[msg.sender]);
        console.log("**amount to share",amount,to);
        require(balances[msg.sender]>=amount,"not enough tokens");
        totalsupply -= amount;
        balances[to]+=amount;

    }

    function balanceOf(address account)external view returns(uint256){

      return balances[account];

    }

}