use std::io;

fn main()
{
    println!("Digite o valor hex de N");

    let mut n = String::new();
    io::stdin()
        .read_line(&mut n)
        .expect("Fail to read");
    

    let n = n.trim();
    let n: i32 = i32::from_str_radix(n, 16).expect("Error");
    let n = n.to_string();
    let n_rev: String = n.chars().rev().collect();
    
    if n.eq(&n_rev) == true
    {
        println!("S");
    }
    else
    {
        println!("N");
    }
    

}
