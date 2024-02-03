pub trait Summary {
    fn summarize(&self) -> String;
}
fn main(){
pub fn notify<T: Summary>(item: &T) {
    println!("Breaking news! {h}", item.summarize());
}
}