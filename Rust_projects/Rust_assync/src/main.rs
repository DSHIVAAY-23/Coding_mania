#![allow(unused)]
use anyhow::Result;

fn main() -> Result<()> {

    println!("-->> {}",add(3,4));
    println!("-->> {}",sub(6,4));

    println!("Hello, world!");
    Ok(())
}


fn add(a:i32,  b:i32) -> Result<String> {

    Ok(format!("{a} +{b}= {}",a+b))

}
fn sub(a:i32,  b:i32) -> Result<String> {

    Ok(format!("{a} -  {b}= {}",a+b))

}