use std::io;

fn main() {

    let mut input = String ::new();
    
    println!("type to print .............. ");

    io::stdin().read_line(&mut input).expect("type in right formate");
   
    println!("you have typed - {}",input);
    

}
