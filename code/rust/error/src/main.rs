// Rust Error examples
// In contrast to C++ - Rust does not have NULL pointers, dangling pointers, or references to NULL (invalid memory):
// And Rust does not know Undefined
/* In Rust we have
Options<T> - exists for optional values.
Result<T, E> - similar to Option<T> but it has an Err value that can contain information about the error.
*/
use std::io;
use std::io::Read;
use std::fs::File; 

fn read_from_file(path: &str) -> Result<String, io::Error> 
{
    let f = File::open(path);

    /* Here we check for the result of ::open call.
    Either it's ok. Then we return the file. Else we return with an error */
    let mut f = match f 
    {
        Ok(file) => file,
        Err(e) => return Err(e),
    };

    let mut s = String::new();

    /* Similar as above. Either string creation has been successfull. Then return ok with file content.
    Else return error.  */
    match f.read_to_string(&mut s) 
    {
        Ok(_) => Ok(s),
        Err(e) => Err(e),
    }
}

// You're sure no error will occur. So you can unwrap the result.
// Unwrap is a method that is used to extract the value from the Result<T, E> if it is Ok(value).
// If the Result is an Err(error), unwrap will panic and display the error message that was passed to Err.
fn read_from_file_unwrap(path: &str) -> Result<String, io::Error> 
{
    let mut f = File::open(path).unwrap();

    let mut s = String::new();

    f.read_to_string(&mut s).unwrap(); // Unwrap the result

    Ok(s)

}

// The opposite operation of unwrap is the expect method. 
// The expect method is similar to unwrap, but it allows you to specify a custom error message. 
fn read_from_file_expect(path: &str) -> Result<String, io::Error> 
{
    let mut f = File::open(path).expect("Failed to open file");

    let mut s = String::new();

    f.read_to_string(&mut s).expect("Error reading file to string"); 

    Ok(s)

}

// Syntactic sugar for the match statement
// The ? operator is a syntactic sugar for the match statement.
fn read_from_file_with_sugar(path: &str) -> Result<String, io::Error> 
{
    let mut f = File::open(path)?;

    let mut s = String::new();

    f.read_to_string(&mut s)?;

    Ok(s)
}
fn main() 
{
    match read_from_file("hello.txt") {
        Ok(content) => println!("File content: {}", content),
        Err(e) => eprintln!("Error reading file: {}", e),
    }

    // Unwrap the result
    let content: String = read_from_file_unwrap("hello.txt").unwrap();
    println!("File content unwrapped: {}", content);

    // Expect the result
    let content: String = read_from_file_expect("hello.txt").expect("Error reading content");
    println!("File content expected: {}", content);

    // With sugar
    let content: String = read_from_file_with_sugar("hello.txt").unwrap();
    println!("File content with sugar: {}", content);
}

