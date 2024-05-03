// SPDX-License-Identifier: MIT
pragma solidity 0.8.20;

contract A{
    event log(string message);

    function parent()public virtual{
        emit log("a.foo");
    }


    function foo()public pure virtual returns(string memory){
        return "A";
    }
 function bar()public pure virtual returns(string memory){
        return "A";
    }
     function baz()public pure virtual returns(string memory){
        return "B";
    }



}

contract B is A{
    function parent()public virtual override {
        emit log("b.foo");
        A.parent(); // we can use super.parent() that will be used for allparent contracts
        
    }
     function foo()public pure override returns(string memory){
        return "B";
    }
     function bar()public pure override returns(string memory){
        return "A";
    }



}