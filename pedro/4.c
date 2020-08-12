#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    scanf ("%d", &num);
    int vetor[num];
    
    vetor[0] = 0;
    vetor[1] = 1;
    
    for (int i = 0; i < num; i++){
        if (i > 1){    
            vetor[i] = vetor[i - 1] + vetor[i - 2];
        }
        printf ("%d\n", vetor[i]);
    }

    return 0;
}
