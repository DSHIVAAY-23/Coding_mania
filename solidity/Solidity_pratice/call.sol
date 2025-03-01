// SPDX-License-Identifier: MIT
pragma solidity 0.8.3;

contract Fallback {
    string public message;
    uint public x;

    event gaj(string message)

    event Log(string func,address sender, uint value,bytes data);

    fallback() external payable { 
     emit Log("fallback",msg.sender,msg.value,msg.data);
     emit gaj("fallback called)
    }
   
    function foo(string memory _message,uint _x)external payable returns(bool,uint){
        message = _message;
        x=_x;
        return (true,999);
    }

}
contract call{
    function  call(address _test) external{
        (bool success,bytes memory data) =_test.call(abi.encodeWithSignature("foo(string,uint)","lessye"123));
    }
    require(success,"callfailed");
 }
