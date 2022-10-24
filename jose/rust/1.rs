use std::io;


fn main()
{
    println!("Digite o valor de N, onde 1<N<1000...");

    let mut n = String::new();
    io::stdin()
        .read_line(&mut n)
        .expect("Fail to read");
    

    
    let n: usize = n.trim().parse().expect("Fail to convert");
    let mut arr: [i32; 1000] = [0; 1000];
    for i in 0..n
    {
        println!("Digite o valor da posicao [{i}]");

        let mut tmp = String::new();
        io::stdin()
            .read_line(&mut tmp)
            .expect("Fail to read");

        arr[i] = tmp.trim().parse().expect("Fail to convert");
    }
    
    let sum: i32 = arr.iter().sum();
    let mut par: i32 = 0;
    let mut imp: i32 = 0;

    for i in arr
    {
        if i % 2 == 0
        {
            par += i;
        }
        else
        {
            imp += i;
        }
    }

    println!("{}", sum);
    println!("{:#x}", par);
    println!("{:#o}", imp);
    

}
