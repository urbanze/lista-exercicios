#include <stdio.h>
#include <string.h>
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

int main(){
    char texto[1000];
    scanf ("%s", texto);
    
    int tabela[strlen(texto)];
    char letras[strlen(texto)];
    
    int cont = 0;
    float contReal = 0;
    int m = 0;
    
    for (int i = 0; i < strlen(texto); i++){
        texto[i] = tolower(texto[i]);
        letras[i] = '.';
    }
    
    for (int i = 0; i < strlen(texto); i++){
        if (texto[i] >= 65 && texto[i] <= 90 || texto[i] >= 97 && texto[i] <= 122){
            contReal = contReal + 1;
            for (int j = 0; j <= i; j++){
                if (texto[i] == letras[j]){
                    tabela[j] = tabela[j] + 1;
                    break;
                }
                if (texto[i] != letras[j] && j == i){
                    letras[cont] = texto[i];
                    tabela[cont] = 1;
                    cont = cont + 1;
                }
            }
        }
    }
    
    for (int i = 0; i < cont; i++){
        if(tabela[i] > m){
            m = tabela[i];
        }
    }
    
    for (int i = 0; i < cont; i++){
        if (tabela[i] == m){
            printf ("%c\t%.2f%\n", letras[i], tabela[i] * 100 / contReal);
        }
    }

    return 0;
}
