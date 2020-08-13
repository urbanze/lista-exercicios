#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int i = 1;
    int cont = 1;
    int *vetor;
    
    while (i != 0){
        scanf ("%d", &i);
        vetor = (int*) realloc (vetor, cont * sizeof(int));
        vetor[cont - 1] = i;
        cont  = cont + 1;
    }
    
    for (int i = 0; i < cont - 2; i++){
        printf ("%d\n", vetor[i] + 1);
    }

    return 0;
}
