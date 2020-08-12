#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num;
    int soma1 = 0;
    int soma2 = 0;
    int controlador;
    int cont = 1;
    int ctrl = 0;
    scanf ("%d", &num);
    int vetor[9];
    controlador = num;
    
    while (controlador >= 10){
        vetor[cont - 1] = controlador % 10;
        controlador = controlador / 10;
        cont = cont + 1;
    }
    //printf ("%d/n", cont);
    vetor[cont - 1] = controlador;
    
    /*for (int i = 0; i < cont; i++){
        printf ("%d\n", vetor[i]);
    }*/

    for (int i = 0; i < cont; i++){
        for (int j = 0; j <= i; j++){
            //printf ("TESTE\n");
            soma1 = soma1 + vetor[j] * pow(10, j);
        }
        for (int k = i + 1; k < cont; k++){
            soma2 = soma2 + vetor[k] * pow(10, ctrl);
            ctrl = ctrl + 1;
        }
        int teste = pow((soma1 + soma2), 2);
        if (teste == num){
            printf ("1");
            return 1;
        }
        //printf ("Soma 1: %d\n", soma1);
        //printf ("Soma 2: %d\n", soma2);
        ctrl = 0;
        soma1 = 0;
        soma2 = 0;
    }
    printf ("0");
    return 1;
}
