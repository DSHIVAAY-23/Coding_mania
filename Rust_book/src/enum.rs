
enum Idaddr{
    V4(String),
    V6(String),

}
enum SpreadsheetCell {
    Int(i32),
    Float(f64),
    Text(String),
}
struct As {
    kind: Idaddr,
    value:u32,
}
fn main(){
    let mut row = vec![
        SpreadsheetCell::Int(3),
        SpreadsheetCell::Text(String::from("blue")),
        SpreadsheetCell::Float(10.12),
    ];
    row.push(SpreadsheetCell::Int(4));
    for i in &row{
        

    
        println!("{:?}",row);
    }
    
    
    let x:i8 = 10;
    let y:Option<i8> = Some(5);
    let sum = x+y.unwrap_or(5);
    println!("{sum}")
   
}