fn find_missing_element(arr: &[i32]) -> i32 {
    // Calculate the sum of all elements in the array
    let actual_sum : i32 = arr.iter().sum();

    // Calculate the expected sum of all elements in the sequence
    let n = arr.len() as i32;
    let expected_sum = (n * (n + 1)) / 2;
     
    // The difference between the two sums is the missing element
    expected_sum - actual_sum
}

fn main() {
    let array = [1,2,3,5,6,7,8];
    let missing = find_missing_element(&array);
    let duplicate = find_duplicate(&array);
    println!("Duplicate: {}", duplicate); 
    println!("Missing: {}", missing);  // prints "Missing: 3"
}

use std::collections::HashMap;

fn find_duplicate(arr: &[i32]) -> i32 {
    let mut map = HashMap::new();

    for i in arr {
        let count = map.entry(i).or_insert(0);
        *count += 1;
    }

    for (i, count) in map {
        if count > 1 {
            return *i;
        }
    }

    // Return -1 if no duplicate is found
    -1
}

