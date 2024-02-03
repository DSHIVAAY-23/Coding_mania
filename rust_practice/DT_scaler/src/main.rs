fn main() {
    let x = -5;
    let y= 5;
    let z=5.5;
    let p=true;
    let q='&';
    println!("
    Here you can see how are compiler implicitly define data type -

    They all are of different data type -

    {} is int type
    {} is uint type
    {} is float type
    {} is bool type
    {} is character type",x,y,z,p,q); //character is any sign u can type one world pad though ur keyborld

    ///////////////////////////////////////////////////
     
    let x:i32 =-5;
    let y:u32= 5;
    let z:f64=5.5;
    let p:bool=true;
    let q:char='&';
    println!("
    Now here you can see how we can explicitly define data type -

    They all are of different data type -

    {} is int type
    {} is uint type
    {} is float type
    {} is bool type
    {} is character type",x,y,z,p,q);
}
