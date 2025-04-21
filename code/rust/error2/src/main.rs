// Rust Error examples
// In contrast to C++ - Rust does not have NULL pointers, dangling pointers, or references to NULL (invalid memory):
// And Rust does not know Undefined
/* In Rust we have
Options<T> - exists for optional values.
Result<T, E> - similar to Option<T> but it has an Err value that can contain information about the error.
*/
use std::io::Read;
use std::fs::File; 
use std	::error;

// Often we have two different errors in the same function.
// Here we have two different errors: io::Error and std::num::ParseIntError
// We can use a trait object to return different error types from the same function.
fn read_number_from_file(filename: &str) -> Result<u64, Box<dyn error::Error>> 
{
    // File::open returns a Result<File, io::Error> 
    // The ? operator is used to propagate errors. If the Result is Ok, it will return the value inside.
    // If the Result is Err, it will return the error and exit the function.   
    let mut file: File = File::open(filename)?;

    // Read the file content into a string.
    // The read_to_string method returns a Result<usize, io::Error>
    let mut buffer = String::new();

    // If the Result is Err, it will return the error and exit the function.
    // read_to_string returns the number of bytes read and a Result<usize, io::Error>
    file.read_to_string(&mut buffer)?;

    // Parse the string into a u64.
    // The parse method returns a Result<u64, std::num::ParseIntError>
    let parsed: u64 = buffer.trim().parse()?;
    
    Ok(parsed)
    
}


fn main() 
{
    // With sugar
    let content: u64 = read_number_from_file("hello.txt").unwrap();
    println!("File content with sugar: {}", content);
}

