
fn main() {
// Each value in Rust has an owner.
// There can only be one owner at a time.
// When the owner goes out of scope, the value will be dropped.
let x = 4;
let y = x;
println!("The value of x is: {x}");
let mut s1 = String::from("buchiya");
let s2 = s1.clone();
s1 = String::from("run");

println!("The value of s2 is: {s2}");
println!("The value of s1 is: {s1}");

//functions

let some_string = String::from("buchiya");



let s = take_ownership(&some_string);
println!("s = {}",s);
makes_copy(x);
println!("{}",x);

    println!("Hello, world!");

}

fn takke_string(d:String)->String{
    some_string.to_string()


}


 fn take_ownership(some_string:&String) -> String{
     some_string.to_string()
}

fn makes_copy(some_integer:i32 ){
    println!("The value of some_integer is: {some_integer}");

    let mut s = String::from("hello");
    s.push_str("world");
    println!("The s is: {s}");
    
}