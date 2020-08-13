//ARQUIVO C++!!!!!!!!

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

int main()
{
    int x = 0;
    int ctr = 0;
    int *block;
    
    while (1)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);
        if (x == 0) {break;}
        
        block = (int*) realloc(block, ++ctr * sizeof(int));
        block[ctr-1] = x;
    }
    
    
    std::sort(block, block+ctr);
    
    printf("\n<==Saida==>\n");
    for (int i = 0; i < ctr; i++)
    {
        printf("%d\n", block[i]+1);
    }

    
    return 0;
}
