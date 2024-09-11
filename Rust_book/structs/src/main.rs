struct User{
    name:String,
    age:u32,
    adult:bool,
    
}
struct Rectangle{
    height:u32,
    width:u32,
}


fn main() {

let mut user1 = User{
    name: String::from("Divyank"),
    age:17,
    adult:false
};
 let mut user2 = User {
        name: user1.name,
        age:user1.age,
        adult:false
       
    };
// println!("{}",user1.name);
println!("{}",user2.name);

let mut rect = Rectangle{
    height:3,
    width:6,
};

  let mut result = area(&rect);
  println!("{}",result);

}
fn area(s:&Rectangle)->u32{
    s.height * s.width
}
