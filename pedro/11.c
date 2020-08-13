#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
    int num;
    int pontos = 0;
    int cont = 0;
    scanf ("%d", &num);
    char texto[250];
    scanf ("%s", texto);
    //printf ("%d", strlen(texto));
    
    for (int i = 0; i < strlen(texto); i++){
        //printf ("%d\n", i);
        int a = isalpha (texto[i]);
        if (a != 0 && i < strlen(texto) - 1){
            cont = cont + 1;    
        }
        
        if (a != 0 && i == strlen(texto) - 1){
            cont = cont + 1;
            if (cont == num){
                pontos = pontos + 1;
            }
        }
        
        if (a == 0){
            if (cont == num){
                pontos = pontos + 1;
            }
            cont = 0;
        }
    }
    printf ("%d", pontos);
      
    return 0;
}
