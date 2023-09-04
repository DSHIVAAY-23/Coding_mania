fn main() {
let arr=[1,3,4,5,8,9];
 println!("{}{}{}",arr[0],arr[2],arr[1]);

let mut arr0=[1,3,4,5,8,9];
 arr0[2]=100;
 println!("{}{}{}",arr0[0],arr0[2],arr0[1]);

 let mut tup=(5,"ty",67,true);
 println!("tuple - {},{}",tup.1,tup.3);
tup.3=false;
println!("tuple - {},{}",tup.1,tup.3);

/////////////////////////////////////////////////////////////////////////////
 
let arr1:[i32;6]=[1,3,4,5,8,9];
 println!("{}{}{}",arr1[0],arr1[2],arr1[1]);

let mut arr2:[i32;6]=[1,3,4,5,8,9];
 arr2[2]=100;
 println!("{}{}{}",arr2[0],arr2[2],arr2[1]);

 let mut tup1:(i32,char,i32,bool)=(5,'y',67,true);
 println!("tuple - {},{}",tup1.1,tup1.3);
tup1.3=false;
println!("tuple - {},{}",tup1.1,tup1.3);
}
