#include <stdio.h>
#include <math.h>


#define REF 'A'


void update(int *x, int n, int m)
{
    for (int i = m-1; i > -1; i--)
    {
        if (x[i] != REF + (n-1))
        {
            x[i]++;
            break;
        }
        
        x[i] = REF;
    }
}

void show(int *x, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c", x[i]);
    }
    
    printf(" ");
}

void init(int *x, int size)
{
    for (int i = 0; i < size; i++)
    {
        x[i] = REF;
    }
}



int main()
{
    int n = 5;
    int m = 3;
    int k = 10;
    int x[m];
    
    init(x, m);
    
    for (int i = 0; i < pow(n, m); i++)
    {
        //show(x, m);
        
        if (i == (k-1)) {show(x, m);}
        update(x, n, m);
    }


    return 0;
}
