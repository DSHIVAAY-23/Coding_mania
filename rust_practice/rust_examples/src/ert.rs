struct User{
    user_id: u32,
    user_name: String,
    user_type: String,
    user_count: u32,


}
pub fn f1(){
   let user1 = User{
    user_id :1,
    user_name: String::from("someusername123"),
    user_type: String::from("someone@example.com"),
    user_count: 1,
   
   };

   println!("User ID: {}", user1.user_id);
   println!("User Name: {}", user1.user_name);
   println!("User Type: {}", user1.user_type);
   println!("User Count: {}", user1.user_count);
}
