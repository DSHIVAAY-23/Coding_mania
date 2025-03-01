// SPDX-License-Identifier: MIT
pragma solidity 0.8.20;

contract  TodoList{
    struct Todo{
    string text;
    bool completed;
    }
    Todo[] public todos;
    event log(string status, uint val);

    function create(string calldata _text)external {
        todos.push(Todo({
            text : _text,
            completed:false
            


        }));

    }
    function update (uint _index,string calldata _text) external {
        todos[_index].text = _text;
         Todo storage todo = todos[_index];
         todo.text = _text; 
         todo.text = _text; 
         todo.text = _text; 
         todo.text = _text; 


    }

    function get(uint _index) external view returns(string memory ,bool ){
    //memory = 29480 gas
    //storage = 29397 gas

    Todo storage todo = todos[_index];
    return (todo.text,todo.completed);
    


    }
 function show() external {
    emit log("done",5);
 }
}