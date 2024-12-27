use std::rc::Rc;
use std::thread;
use std::sync::Arc;
use std::cell::RefCell;


struct Person {
    name: String,
    age: u32,
}

fn main() {

    // for Rc  

    /* let person1 = Rc::new(Person {
        name: "Alice".to_string(),
        age: 25,
    });*/
let  cave = Arc::new(Person {
        name: "Alice".to_string(),
        age: 25,
    });
let r1 = cave.clone();
 let r2 = cave.clone();
  
 println!("the rc count is : {}",Arc::strong_count(&cave));

    let thread1 = thread::spawn(move || {
        println!("Thread 1: Name={}, Age={}", r1.name, r1.age);
        // Simulate some work being done in thread 1
        thread::sleep_ms(1000);
    });

    let thread2 = thread::spawn(move || {
        println!("Thread 2: Name={}, Age={}", r2.name,r2.age);
        // Simulate some work being done in thread 2
        thread::sleep_ms(1000);
    });

    thread1.join().unwrap();
    thread2.join().unwrap();

    println!("Reference Count: {}", Arc::strong_count(&cave));
    
    let head = RefCell::new(32);
    *head.borrow_mut() += 1;
     println!("{}", *head.borrow());

    
    
}