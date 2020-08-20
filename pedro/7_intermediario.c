#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 1, m = 1;
    int cont = 1;
    
    int *vetor = (int*)malloc(1 * sizeof(int));
    int *vetorAux = (int*)malloc(1 * sizeof(int));
    
    while(n != 0 || m != 0){
        scanf("%d %d", &n, &m);
        if(n != 0 || m != 0){
            vetor = (int*)realloc(vetor, cont * sizeof(int));
            vetorAux = (int*)realloc(vetorAux, cont * sizeof(int));
            vetor[cont] = n;
            vetorAux[cont] = m;
        }
        cont = cont + 1;
    }
    
    for(int j = 0; j < cont; j++){
        for(int i = 2; i <= vetor[j]; i++){
            if(vetor[j] % i == 0 && vetor[j] != 0 && vetorAux[j] != 0){
                if(vetorAux[j] % i == 0){
                    vetor[j] = vetor[j] / i;
                    vetorAux[j] = vetorAux[j] / i;
                    i = i - 1;
                }
            }
        }
    }
    
    for(int i = 1; i < cont - 1; i++){
       printf("%d %d\n", vetor[i], vetorAux[i]); 
    }

    return 0;
}
