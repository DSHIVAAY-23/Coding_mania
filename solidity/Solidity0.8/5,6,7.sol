// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.8.2 <0.9.0;


contract Statevariable{
    uint public myteam;
function state()external pure returns(uint){
    
}
}

contract localvariable{

    function local()external{
        uint x = 1234;
        bool y = true;

    x+=321;
    y= false;
    }
}

contract Global{
    function global()external view returns(address,uint,uint) {
            address x = msg.sender;
    uint time = block.timestamp;
    uint y = block.number;
    return (x,time,y);
    }
}