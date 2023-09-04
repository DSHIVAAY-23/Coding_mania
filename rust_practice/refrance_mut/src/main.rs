fn main() {
//     let mut s = String::from("hello");

//     change(&mut s);
//      println!("{}",s);
// }

// fn change(some_string: &mut String) {
//     some_string.push_str(", world");


///////////////////////////////////////////////////////////////////////////////
//  Mutable references have one big restriction: if you have a mutable reference to a value, you can have no other references to that value. This code that attempts to create two mutable references to s will fail:
 
// let mut s = String::from("hello");

// let r1 = &mut s;
// let r2 = &mut s;

// println!("{}, {}", r1, r2);

//////////////////////////////////////////////////////////////////////////////////

// This error says that this code is invalid because we cannot borrow s as mutable more than once at a time. The first mutable borrow is in r1 and must last until it’s used in the println!, but between the creation of that mutable reference and its usage, we tried to create another mutable reference in r2 that borrows the same data as r1.

let mut s = String::from("hello");

let r1 = &mut s;

println!("{}", r1);
let r2 = &mut s;

// println!("{}", r1);

println!("{}", r2);

}



