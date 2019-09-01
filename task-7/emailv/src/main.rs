extern crate regex;

use std::io;

use regex::Regex;

fn main(){


  println!("enter the email");

  let mut input = String::new();

  io::stdin().read_line(&mut input);

  assert!(Regex::new(r"\w[a-zA-Z0-9._+-]+@[a-zA-Z0-9._]+\.[a-zA-Z]").unwrap().is_match(&input));


}
