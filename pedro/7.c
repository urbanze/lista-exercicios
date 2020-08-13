#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int Rev(int a){
    int numInvertido = 0;
    int vetor[10];
    int control = a;
    int cont = 0;
    int cont2 = 0;
    
    while (control >= 10){
        vetor[cont] = control % 10;
        control = control / 10;
        cont = cont + 1;
    }
    vetor[cont] = control;
    //printf ("%d\n", cont);
    
    /*for (int i = 0; i <= cont; i++){
        printf ("%d\n", vetor[i]);
    }*/
    
    for (int i = cont; i >= 0; i--){
        numInvertido = numInvertido + vetor[i] * pow(10, cont2);
        cont2 = cont2 + 1;
    }
    
    return numInvertido;
    
}

int main(){
    int num, num2;
    scanf ("%d", &num);
    scanf ("%d",&num2);
    
    int resultado = Rev(Rev(num) + Rev(num2));
    printf ("%d", resultado);

    return 1;
}
