fn main() {
    let mut x= 4;
    // let t = &x;
    // println!("{}", t); 

    let y = &mut x;
    
    // let z = &mut x;
    // let d = &mut x;
    println!("{}", y); 
let s3 = "D fun";


    let mut s1 = String::from("hello");

    let e = &mut s1;
    // let f: &mut String = &mut s1;
    println!("{}", e); 

    let len = calculate_length(&s1);

    println!("The length of '{}' is {}.", s1, len);
}

fn calculate_length(s: &str) -> &str {
    let bytes = s.as_bytes();
    for (i,&item) in bytes.iter().enumerate(){
        if item == b' '{
            return &s[0..i];
        }

    }
     &s[..]
}