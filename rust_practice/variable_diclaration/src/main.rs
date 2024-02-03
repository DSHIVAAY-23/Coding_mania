fn main() {
    let x=4;
    let x=8;

    println!("Hello, world! and i have typed - {}",x);
    {
        let x=x+5;
        println!("Hello, world! and i have typed - {}",x);
    }
    {
        let x = "hallo";
        println!("we can also change the type of x if we are re declairing it - {}",x);
    }

    let x=x+10;
    println!("Hello, world! and i have typed - {}",x);
}
