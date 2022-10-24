use std::io;


fn main()
{
    println!("Digite o valor de N, onde 1<N<1000...");

    let mut n = String::new();
    io::stdin()
        .read_line(&mut n)
        .expect("Fail to read");
    

    
    let n: usize = n.trim().parse().expect("Fail to convert");
    let mut arr: [i32; 1000] = [-1001; 1000];
    for i in 0..n
    {
        println!("Digite o valor da posicao [{i}]");

        let mut tmp = String::new();
        io::stdin()
            .read_line(&mut tmp)
            .expect("Fail to read");

        arr[i] = tmp.trim().parse().expect("Fail to convert");
    }

    let mut media: f32 = 0.0;
    let mut ctr: i32 = 0;

    for i in arr
    {
        if i >= -1000 && i <= 1000
        {
            ctr += 1;
            media += i as f32;
        }
    }

    
    media /= ctr as f32;
    println!("{media}");

    

}
