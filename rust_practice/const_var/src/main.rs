fn main() {
    println!("Hello, world!");

    const CT:u8 = 4;         //it compulsory to provide type for const variable and its good if u type name in upper case
    println!("const = {}",CT);

    {
        const CT:u8 = 9;         //it compulsory to provide type for const variable and its good if u type name in upper case
        println!("const = {}",CT);  
        // const CT:u8 = CT+9;         //WE CAN NOT CHANGE THE VALUE
        // println!("const = {}",CT); 
    }
    // const CT:u8 = 90;         //`CT` must be defined only once in the value namespace of this block
    // println!("const = {}",CT); 

}
