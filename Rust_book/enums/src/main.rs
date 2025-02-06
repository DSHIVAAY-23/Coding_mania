enum Learning{
    Rust,
    Dsa,
    English,
}
impl Learning{
 fn some_function(){
    println!("let show it");
 }
}

fn learning_value(learning:Learning)->u8{
    match learning{
        Learning::Dsa => 5,
        Learning::English =>6,
        Learning::Rust => 12,
       }
}

fn main() {
     let y :Option<u8> = Some(9);
     let x :Option<u8> = None;
     let c = x.unwrap_or(0) +y.unwrap_or(6);
     println!("{}",c);
    let z =learning_value(Learning::Dsa);
println!("{}",z);
    
    println!("Hello, world!");
}
