use std::io;

fn main() {

    // let  x= 5;
    // let x = String::from("hello world");
    //    println!("The value of x is: {x}");
  // let   a = 4;
  //   println!("The value of a is: {a}");
  //   let mut  s = "hello";
  //    s="radu";
  //    println!("The s is: {s}");
     let tup = ("hello",5);
     let (greet,money) = tup;

      println!("first greet {}",tup.0);

    println!("Hello, world!");
    let sum = my_function(3,4);
    println!("The sum is: {sum}");
}


fn my_function(x: i32, y: i32) -> i32 {
    x + y
}