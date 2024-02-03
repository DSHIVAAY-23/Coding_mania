
pub fn vec(){
    let mut x :Vec<i32> = Vec::new();
    let  mut d = vec![2,3,4];
d.push(6);
for i in &mut d{
    *i += 50;
    println!("{i}");
}
}