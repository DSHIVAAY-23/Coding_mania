use rand;
use std::cmp::Ordering;
use std::io;

fn main() {
    // Creat a randum no.

    let num = rand::random::<u8>();

    // Ask them to guess a no.

    println!("Guess a number");
    loop {
        let mut x = String::new();
        io::stdin().read_line(&mut x);
        println!("You have guessed - {}", x);
        let x: u8 = x.trim().parse().expect("Type integers only");

        // now check if guessed no. is in range

        match x.cmp(&num) {
            Ordering::Less => println!("Try bigger number"),
            Ordering::Greater => println!("Try smaller number"),
            Ordering::Equal => {
                println!("You won !");
                break;
            }
        }

        // if num>=x-20&&num<=x+20{println!("Sahi pakde haen");
        // break;}
        // else{println!("galat hae , phirse dhyaanse likho")}
    }
}

