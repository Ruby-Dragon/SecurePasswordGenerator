use std::env;
use std::io;

fn main() {
    println!("Hello, world!");
		for argument in env::args()
    {
			println!("{}", argument);
		}
		println!("Number to char test: {}", 65u8 as char);
}
