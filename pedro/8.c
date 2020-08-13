#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num;
    int contPar = 0;
    int contImpar = 0;
    scanf ("%d", &num);
    int vetor[num];
    
    for (int i = 0; i < num; i++){
        scanf ("%d", &vetor[i]);
        if (vetor[i] % 2 == 0){
            contPar = contPar + 1;
        }
        else {
            contImpar = contImpar + 1;
        }
    }
    if (contPar == contImpar){
        printf ("S");
    }
    else{
        printf ("N");
    }

    return 1;
}
