struct Newspaper{
    author:String,
    date:u32,
    content:String,
}
impl Summary for Newspaper{
    fn summarize(&self)->String{
        format!("{} - {} - {}",self.author,self.date,self.content.chars().take(20).collect::<String>())
    }
}
struct Tweet {
    username:String,
   content:String,
   retweet:bool,
}
impl Summary for Tweet{
    fn summarize(&self)->String{
        format!("{}: {}",self.username,self.content)
    }
}
pub trait Summary{
    fn summarize(&self)->String;
}

//trait as argument
// pub fn demon(item:&impl Summary) {
//     println!("{}",item.summarize());
// }

// updated syntax of trait bound
pub fn demon<T:Summary>(item:&T){
println!("{}",item.summarize());
}
//more complex example
pub fn dedu<T:Display + Clone,U:Clone +Debug>(item1:&T,item2:&U){
    println!("{:?},{:?}",item1.clone(),item2.clone());
}

fn main(){
let news = Newspaper{
    author:String::from("John Doe"),
    date:2021,
    content:String::from("This is a newspaper article"),
};
let tweet = Tweet{
    username:String::from("user123"),
    content:String::from("This is a tweet"),
    retweet:true,
};


println!("{}",news.summarize());
println!("{}",tweet.summarize());
demon(&news);
}