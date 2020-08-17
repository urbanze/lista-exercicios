#include <stdio.h>
#include <string.h>
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

int main(){
    char palavra1[100];
    char palavra2[100];
    scanf ("%s", palavra1);
    scanf ("%s", palavra2);
    
    char giro[strlen(palavra1)];
    char aux[2 * strlen(palavra1)];
    int cont = 0;
    for (int i = 0; i < 2 * strlen(palavra1); i++){
        if (cont == strlen(palavra1)){
            cont = 0;
        }
        aux[i] = palavra1[cont];
        cont = cont + 1;
    }
    //printf ("%s", aux);
    
    for (int i = 0; i < strlen(palavra1); i++){
        cont = 0;
        for (int j = 0; j < strlen(palavra1); j++){
            giro[cont] = aux[i + j];
            cont = cont + 1;
        }
        printf ("%s\n", giro);
        for (int k = 0; k < strlen(palavra2); k++){
            if (palavra2[k] != giro[k]){
                break;
            }
            if (palavra2[k] == giro[k] && k == strlen(giro) - 1){
                return 1;
            }
        }
        /*if (strncmp(giro, palavra2, strlen(palavra2))){
            return 1;
        }*/
    }
    
    return 0;
}
