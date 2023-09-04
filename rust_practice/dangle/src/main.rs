fn main() {
    let reference_to_nothing = dangle();
}

fn dangle() -> &String {
    let s = String::from("hello");

    &s
}


/////////////////////////////////////////////////////////////////////////

// fn main() {
//     let reference_to_nothing = dangle();
//     println!("{}", reference_to_nothing);
// }

// fn dangle() -> String {
//     let s = String::from("hello");

//     s
// }
