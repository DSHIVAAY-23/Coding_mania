fn main() {
    println!("{}", new(4, 5));
    println!("{}", new1(4, 50));
    println!("{}", new2(4, 50));
    println!("{}", new3(40, 50));
}

fn new(x: i32, y: i32) -> i32 {
    x + y
}

fn new1(x: i32, y: i32) -> bool {
    println!("{}", x + y);

    true
}

fn new2(x: i32, y: i32) -> i64 {
    let z=x*y;
    z as i64
}


fn new3(x: i32, y: i32) -> i64 {
    return (x*y) as i64;
}