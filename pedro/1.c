#include <stdio.h>

int main()
{
    int num;
    int soma = 0;
    int cont = 0;
    int hex = 0;
    int oct = 0;
    scanf ("%d", &num);
    int vet[num], vetHex[num], vetOct[num];
    
    for (int i = 0; i < num; i++){
        scanf ("%d", &vet[i]);
        soma = soma + vet[i];
        if (vet[i] % 2 == 0){
            hex = hex + vet[i];
        }
        else {
            oct = oct + vet[i];
        }
    }
    
    printf ("Saída:\n%d\n", soma);
    
    while (hex > 16){
        vetHex[cont] = hex % 16;
        hex = hex / 16;
        cont = cont + 1;
    }
    vetHex[cont] = hex;
    
    for (int i = cont; i >= 0; i--){
        printf ("%d", vetHex[i]);
    }
    
    printf("\n");
    cont = 0;
    
    while (oct > 8){
        vetOct[cont] = oct % 8;
        oct = oct / 8;
        cont = cont + 1;
    }
    vetOct[cont] = oct;
    
    for (int i = cont; i >= 0; i--){
        printf ("%d", vetOct[i]);
    }
    
    return 0;
}
