use std::io;
fn main(){
    let mut x = String::new();
    println!("Type anything here");
    io::stdin().real_line(&mut x);
    println!("You have typed - {}",x);
}