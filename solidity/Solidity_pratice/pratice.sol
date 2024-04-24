// SPDX-License-Identifier: MIT
pragma solidity 0.8.20;


contract Pratice{
    uint price;
    string name;
    uint public discount = 2000;
    uint [4] public array =  [2,3,4,5];
    bytes public b1 ="21";
    uint public count;
    mapping(uint=>string) public roll_no;
     
    struct Student{
    uint class;
    string name;
}
mapping (uint=>Student) public data;

    constructor()
{
    name = "lenevo";
    price = 50000;
}
function setname(string memory _name)public {
    name = _name;
}
function setprice(uint256 _price)public {
 
_price = price - discount;
price = _price;

     
}
function getname() view public returns(string memory){
     return name;
}
function getprice() view public returns(uint){
     return price;
}

function sethealth(uint _health)pure public returns (uint) {
 uint health = _health;
 return health;
}


function setter(uint index,uint value) public 
{
    array[index] = value;
    }

function getelement(uint i)public view returns(bytes1){
  return b1[i];
}
function loop()public{
    while(count<array.length){
        array[count]= count;
        count++;
    }
}
function map(uint key,string memory value) public{
   roll_no[key]  = value;
}

function str(uint _class,uint roll, string memory _name)public {
 data[roll] = Student(_class,_name);
}
}