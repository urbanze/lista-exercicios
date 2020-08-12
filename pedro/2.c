#include <stdio.h>

int main()
{
    int num;
    float soma = 0;
    int cont = 0;
    scanf ("%d", &num);
    int vetor[num];
    
    for (int i = 0; i < num; i++){
        scanf ("%d", &vetor[i]);
        if (vetor[i] < 1000 && vetor[i] > -1000){
            soma = soma + vetor [i];
            cont = cont + 1;
        }
    }
    
    printf ("%.1f", soma / cont);

    return 0;
}
