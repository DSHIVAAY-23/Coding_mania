use std::collections::HashMap;
fn main() {
    let mut v1 = Vec::new();  // Use 'mut' to make the vector mutable
    v1.push(1);
    v1.push(2);
    println!("vector 1: {:?}", v1);

    match v1.get(3){
        Some(third)=>println!("third{}",third),
        None=>println!("none found"),
    }

    let mut v2: Vec<i32> = vec![1, 2, 3,4,4];
    println!("vector 2: {:?}", v2);  // Use {:?} to print a vector
    let third = &v2[3]; 

     println!("third: {}", third);
      
     v2.push(6);

    match v2.get(20){
        Some(third) => println!("third: {}", third),
        None => println!("none found"),
    }
for i in &v2 { println!("{}", i); }


enum Error {
    Int(i32),
    text(String),

}
let v3 = vec![
Error::Int(10), //
    Error::text(String::from("hello")),
]    ;


 match &v3[1]{
    Error::Int(i) => println!("{}", i),
    _ => println!("not a integer"), //

 };





//strings

let mut s1 =String::from("hello") ;
let mut s2 = String::new();
s2.push_str("hello");
let s3 = format!("{}{}",s1,s2);
s1.push_str(" hitler") ;
let s4 = s1.clone() + &s2;
println!("{}", s1);
println!("{}", s2);
println!("{}", s3);
println!("{}", s4);



//hashmaps
let   x = 11;
 let x = x + 1;
println!("{}",x);

let blue = String::from("Blue");
let red = String::from("Red");
let mut h = HashMap::new();
h.insert(blue, 10);
h.insert(red, 20);
println!("{:?}", h);


let a = 10;
let b = a;
println!("{:?}", a);

}

