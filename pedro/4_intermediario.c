#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> 

int main(){
    char texto[100];
    scanf ("%s", texto);
    
    if(strlen(texto) % 2 == 0){
        int metade1[strlen(texto) / 2] = {0};
        int m = 122;
        int idx = 0;
        int cont = 0;
        
        for (int i = 0; i < strlen(texto) / 2; i++){
            for (int j = 0; j < strlen(texto) / 2; j++){
                if (texto[j] < m){
                    m = texto[j];
                    idx = j;
                }
                if (j == strlen(texto) / 2 - 1){
                    metade1[i] = m;
                    texto[idx] = 'z';
                    m = 122;
                    idx = 0;
                }
            }
        }
        for (int i = 0; i < strlen(texto) / 2; i++){
            texto[i] = metade1[i];
            if (texto[i] == texto[i + strlen(texto) / 2]){
                cont = cont + 1;
            }
        }
        if (cont == strlen(texto) / 2){
            printf ("S\n");
        }
        else{
            printf ("N\n");
        }
        printf ("%s", texto);
    }
    else{
        printf ("N\n");
    }
    
    return 0;
}
