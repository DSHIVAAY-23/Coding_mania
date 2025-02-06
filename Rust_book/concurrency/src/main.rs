use std::sync::mpsc;
use std::thread;
use std::time::Duration;

fn main() {
    let (tx, rx) = mpsc::channel();
    
    let tx_inc = tx.clone();
    
    let handle_inc = thread::spawn(move || {
        for _ in 0..10 {
            tx_inc.send(1).unwrap(); // Send increment signal
            thread::sleep(Duration::from_millis(50));
        }
    });

    let handle_dec = thread::spawn(move || {
        for _ in 0..10 {
            tx.send(-1).unwrap(); // Send decrement signal
            thread::sleep(Duration::from_millis(50));
        }
    });

    let mut counter = 0;
    
    for received in rx.iter().take(20) {
        counter += received;
        println!("Counter: {}", counter);
    }

    handle_inc.join().unwrap();
    handle_dec.join().unwrap();

    println!("Final value: {}", counter);
}
