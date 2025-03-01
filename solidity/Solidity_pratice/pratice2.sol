// SPDX-License-Identifier: MIT
pragma solidity 0.8.20;


contract Pratice2{
address payable user= payable(0x4B20993Bc481177ec7E8f571ceCaE8A9e22C02db) ;
function getter() public  view returns(uint block_no,uint timestamp,address msgsender){
    return (block.number,block.timestamp,msg.sender);
}
function payether()public payable{

}

function getbalance()public  view returns(uint){
    return address(this).balance;
}
function sendether()public {
    user.transfer(2 ether);
}
}