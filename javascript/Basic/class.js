import {user} from '../function.js'
// import {greet} from './function.js'

// greet();
console.log(user);
class hello{
    constructor(name,age){
        this.Dname =name;
        this.Dage = age;

        console.log("run it back");
    }
    hell(){
        console.log(`Hell ${this.Dname} age is ${this.Dage}`);
    }
}
let a = new hello("divyank",20);
a.hell();

class employee extends hello {
    constructor(name,age){
        super();
        console.log("run it back");
    }
}

let x = new employee("shivaay",22);
