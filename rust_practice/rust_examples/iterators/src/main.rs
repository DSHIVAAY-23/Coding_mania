mod own;

pub trait Iterator{
    type Item;
    fn next (&mut self) -> Option<Self::Item>;

}
fn main(){
  let x = vec![1,2,3];
  let  v1_iter= x.iter();
  let total:i32 = v1_iter.clone().sum();
  assert_eq!(total,6 );

  println!("Got:{}",total);
  for i in v1_iter{
 println!("got:{}",i);
  }


let v2:Vec<i32> = x.iter().map(|x|x+1).collect();
assert_eq!(v2,vec![2,3,4]);


}