#include <stdio.h>

int primo(int x)
{
    int ctr = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            ctr++;
            if (ctr > 2) {break;}
        }
    }
    
    if (ctr == 2) {return 1;}
    
    return 0;
}

int main()
{
    
    int p = 0;
    printf("Digite P 2<=P<=4294967294: ");
    scanf("%d", &p);
    
    int a = 0, b = 0;
    for (int i = 0; i <= p; i++)
    {
        if (primo(i) == 0) {continue;}
        
        a = i;
        b = p - i;
        
        if (primo(b))
        {
            break;
        }
    }
    
    if (!a || !b) {printf("ERROR"); return 0;}
    
    
    printf("Goldbach: %d %d", a, b);
    

    return 0;
}
