#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int x = 0;
    printf("Digite um numero 1<=X<=40: ");
    scanf("%d", &x);
    printf("0\n1\n");
    
    int a[2] = {0, 1};
    for (int i = 0; i < x-2; i++)
    {
        int sum = a[0] + a[1];
        a[0] = a[1];
        a[1] = sum;
        
        printf("%d\n", sum);
    }

    return 0;
}
