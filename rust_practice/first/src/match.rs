fn main(){
    let number = 4;
    let name = "pappu";
    match number {
        1 =>println!("hnhn"),
        4 =>println!("hnhn4"),
        _ =>print!("type only 1 or 4")
        
    }
    match name {

        "tutu" => println!("not same"),
        "pappu"=>println!("ye its same name"),
        _ =>println!("not matching")
        
    }

}