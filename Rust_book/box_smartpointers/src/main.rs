use std::thread;
use std::sync::Arc;

struct Person {
    name: String,
    age: u32,
}

fn main() {
    let person = Arc::new(Person {
        name: "Alice".to_string(),
        age: 25,
    });

    let person_clone1 = Arc::clone(&person);
    let person_clone2 = Arc::clone(&person);

    let thread1 = thread::spawn(move || {
        println!("Thread 1: Name={}, Age={}", person_clone1.name, person_clone1.age);
        // Simulate some work being done in thread 1
        thread::sleep_ms(1000);
    });

    let thread2 = thread::spawn(move || {
        println!("Thread 2: Name={}, Age={}", person_clone2.name, person_clone2.age);
        // Simulate some work being done in thread 2
        thread::sleep_ms(1000);
    });
    
    let thread7 =thread::spawn(move||{
        
    });
match thread7.join(){
   Ok(result)=>{
       
   },
   Err(_) =>{
       
   }
    
}
    thread1.join().unwrap();
    thread2.join().unwrap();
 
  // Hey Curly, do you know why this is one? I know it has something to do with threads
    println!("Reference Count: {}", Arc::strong_count(&person));
}