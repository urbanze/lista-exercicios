#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int x = 0;
    printf("Digite um numero HEX: ");
    scanf("%x", &x);
    
    
    char str[10] = {0};
    int size = snprintf(str, sizeof(str), "%d", x);
    printf("Dec: %s, size: %d\n", str, size);


    int espelho = 1;
    for (int i = 0; i < size; i++)
    {
        if (str[0+i] != str[size-(i+1)])
            {espelho = 0; break;}
    }
    
    
    if (espelho) {printf("S");}
    else {printf("N");}
    

    return 0;
}
