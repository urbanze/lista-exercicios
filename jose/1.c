#include <stdio.h>

int main ()
{
    int tt = 0;

    printf("Digite um numero 1<X<1000: ");
    scanf("%d", &tt);
    
    
    int n[tt];
    for (int i = 0; i < tt; i++)
    {
        printf("Insira o numero [%d]: ", i+1);
        scanf("%d", &n[i]);
    }
    
    
    int soma = 0, impar = 0, par = 0;
    for (int i = 0; i < tt; i++)
    {
        soma += n[i];
        
        if (n[i] & 1) {impar += n[i];}
        else {par += n[i];}
    }
    printf("\nTotal: 0d%d", soma);
    printf("\nPares: 0h%x", par);
    printf("\nImpares: 0o%o", impar);
    
    
    

    return 0;
}
