#[derive(Debug)]
struct Rectangle {
    width: u32,
    height: u32,
}

impl Rectangle {
    fn area(self:&Self) -> u32 {
        self.width * self.height
    }
}
impl Rectangle{
    fn perimeter(&self) ->u32{

        2*(self.width+self.height)
    }
}

fn main() {
    let rect1 = Rectangle {
        width: 30,
        height: 50,
    };

    println!(
        "The area of the rectangle is {} square pixels.",
        rect1.area()
    );
    println!(
        "The perimeter of the rectangle is {} square pixels.",
        rect1.perimeter()
    );
}