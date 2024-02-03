fn main(){
    let n = vec![1,2,3,2,4,3,5];
let mut l = n[0];

for i in  n{
    if i > l{
        l = i;
    }

}
println!("{}",l)
}