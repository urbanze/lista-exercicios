use std::io;

fn main()
{
    println!("Digite o valor de N, onde 1<=N<=40");

    let mut n = String::new();
    io::stdin()
        .read_line(&mut n)
        .expect("Fail to read");
    

    let n = n.trim().parse().expect("Error");
    let mut arr: [i32; 40] = [0; 40];
    arr[1] = 1;

    for i in 0..n
    {
        if i >= 2
        {
            arr[i] = arr[i-1] + arr[i-2];    
        }

        println!("{}", arr[i]);
    }
    

}
