use core::panic;


use  std::fs::File;


fn a(){
    b();
}
fn b(){
    c(21);
}
fn c(num:i32){
    if num == 22{
        panic!("just panic bitch");
    } 
}
fn main() {
enum Result<T,E>{
    Ok(T),
    Err(E),
}

let f = File::open("hello.txt")?;
// let z = match f{
//     Ok(file)=>File,
//     Err(error)=>panic!("problem created{:?}",error)
// }
    a();
    println!("Hello, world!");
    panic!("crash and burn");
}
