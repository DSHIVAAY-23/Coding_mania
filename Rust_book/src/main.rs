use core::fmt::Display;
use std::fmt;

mod lib;
mod string;
mod  ert;
mod vec;



fn main(){

// lib::factorial(6);
// string::run();
// ert::f1();
// vec::vec();
example(2.5);

let point = Point { x: 1, y: 2 };
println!("{}", point);

}

struct Point {
    x: i32,
    y: i32,
}

impl fmt::Display for Point {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "({}, {})", self.x, self.y)
    }
}
fn example<T: Display>(item: T) {
    println!("{}", item);
}
