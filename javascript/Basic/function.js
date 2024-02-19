 function greet(user){
    return 'hello ' +  user
}
export let user = 'nate';
let greeting = greet(user);
console.log(greeting);

//arrow functions
 let D = (user) => {

    return 'hello ' +  user
 }
 console.log(D("dj snake"));


 //this
 let laptop = function(){
    this.user = user,
    this.model = "lenevo",
    this.price = 1000

    
 };
