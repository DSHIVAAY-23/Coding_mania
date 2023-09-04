use std::io;
use rand;

fn main(){
     // Creat a randum no.
     let num = rand::random::<u8>();
    // println!("secret no. is - {}",num);

    // Ask them to guess a no.
    println!("Guess a number");
    loop {
        let mut x = String::new();
    io::stdin().read_line(&mut x);
    println!("You have guesses - {}",x);
    let x:u8=x.trim().parse().expect("Type only integer");

    // now check if guessed no. is in range
    if num>=x-20&&num<=x+20{println!("You Won!");
break;}
    else{println!("Wrong! , Try again")}
     }
}