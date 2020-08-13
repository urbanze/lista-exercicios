#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int I = 1;
    int num = 0;
    int cont = 0;
    
    while (I != 0){
      scanf ("%d", &I);
      if (I != 0){
        num = num + I * pow(10, cont);   
      }
      cont = cont + 1;
    }
    //printf ("%d\n", num);
    //printf ("%d", cont);

    int vetor[cont - 1];

    for (int i = cont - 3; i >= 0; i--){
      printf ("%d\n", (num % 10) + 1);
      num = num / 10;
    }
    printf ("%d", num + 1);

    return 1;
}
