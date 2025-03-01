// SPDX-License-Identifier: MIT
pragma solidity ^0.8.24;

contract ETHWALLET{
    address payable public owner;

    constructor(){
        owner = payable(msg.sender);
    }

    receive() external payable { }
    function withdraw(uint _amount)external {
        require(msg.sender==owner);
        payable(msg.sender).transfer(_amount); //we use msg.sender on place of owner to save gas by not using state variable
    }

    function transfer(address payable _to)external payable{
        _to.transfer(1234);
    }
    function getbalance()external view returns(uint){
        return address(this).balance;
    }
}