use std::ops::Deref;

struct MyBoX<T>(T);

impl <T> MyBoX<T> {
    fn new(x: T) -> MyBoX<T> {
        MyBoX(x)
    }
    
}
impl <T> Deref for MyBoX<T> {

    type Target = T;
    fn deref(&self) -> &Self::Target {
        &self.0
    }
    
}





fn main() {
let x = 5;
let y = &x;
let z = Box::new(x);
let a = MyBoX::new(x);
assert_eq!(5,x);
assert_eq!(5,*y);
assert_eq!(5,*z);
assert_eq!(5,*a);

    println!("Hello, world!");
}
