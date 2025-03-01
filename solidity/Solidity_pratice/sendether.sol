// SPDX-License-Identifier: MIT
pragma solidity 0.8.20;

contract sendether{
    constructor()payable {

    }
    receive() external payable { }

    function transfer(address payable _to) external payable{
        _to.transfer(12);
    }
    function sennd(address payable _to) external payable{
      bool sent= _to.send(12);
      require(sent,"sent failed");

    }
    function call(address payable _to) external payable{
     (bool sucsess,) = _to.call{value:12}("");
     require(sucsess,"call failed");
    }
}

contract ethreciever{
    event log(uint amount,uint gas);

    receive() external payable { 
        emit log(msg.value,gasleft());
    }
     function transfer(address payable _to) external payable{
        _to.transfer(12);
    }
}