pragma solidity ^0.8.0;


contract Counter{
    uint public count ;
    function inc()external  returns(uint){
        count += 1;
        return count;
    }
    function dec()external  returns(uint){
        count -= 1;
        return count;
    }
}
