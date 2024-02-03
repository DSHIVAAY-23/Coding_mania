pub fn run(){
    let v = "initial contents".to_string();
    let  mut s = String::new();
    s.push('h');
    s.push_str("bar");
    



    let mut x = String::from("initial contents");
    x.push_str(" sex");
    let d = x.clone() + &s;
    

    println!("{v}");
    println!("{s}");
    println!("{x}");
    println!("{d}");

    let s2 = &s[0..4];
    println!("{s2}");

    let  hello = "babua";

    let s1 = &hello[0..5];
    println!("{s1}");
    for c in "babu".chars(){
        println!("{c}");

    }

 
    let hello = String::from("नमस्ते");
    
    println!("{hello}");



}