fn main() {
    let mut x= 4;
    // let t = &x;
    // println!("{}", t); 

    let y = &mut x;
    
    // let z = &mut x;
    // let d = &mut x;
    println!("{}", y); 



    let mut s1 = String::from("hello");

    let e = &mut s1;
    // let f: &mut String = &mut s1;
    println!("{}", e); 

    let len = calculate_length(&s1);

    println!("The length of '{}' is {}.", s1, len);
}

fn calculate_length(s: &String) -> usize {
    s.len()
}