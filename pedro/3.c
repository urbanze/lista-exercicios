#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char hexa[256];
    int dec[256];
    char num[256];
    int numeroDec = 0;
    int cont = 0;
    scanf ("%s", hexa);
    int tam = strlen(hexa);
    
    for(int i = tam - 1; i >= 0; i--){
        if (hexa[i] == 'a' || hexa[i] == 'A'){
            dec[i] = 10 * pow(16, cont);
            cont = cont + 1;
        }
        else if (hexa[i] == 'b' || hexa[i] == 'B'){
            dec[i] = 11 * pow(16, cont);
            cont = cont + 1;
        }
        else if (hexa[i] == 'c' || hexa[i] == 'C'){
            dec[i] = 12 * pow(16, cont);
            cont = cont + 1;
        }
        else if (hexa[i] == 'd' || hexa[i] == 'D'){
            dec[i] = 13 * pow(16, cont);
            cont = cont + 1;
        }
        else if (hexa[i] == 'e' || hexa[i] == 'E'){
            dec[i] = 14 * pow(16, cont);
            cont = cont + 1;
        }
        else if (hexa[i] == 'f' || hexa[i] == 'F'){
            dec[i] = 15 * pow(16, cont);
            cont = cont + 1;
        }
        else{
            num[0] = hexa[i];
            dec[i] = atoi(num) * pow(16, cont);
            cont = cont + 1;
        }
    }
    /*for(int i = tam - 1; i >= 0; i--){
        printf ("%d\n", dec[i]);
    }*/
    
    cont = 0;
    
    for (int i = 0; i < tam; i++){
        numeroDec = numeroDec + dec[i];
    }
    //printf ("%d\n", numeroDec);

    while(numeroDec >= 10){
        dec[cont] = numeroDec % 10;
        numeroDec = numeroDec / 10;
        cont = cont + 1;
    }
    dec[cont] = numeroDec;
    
    /*for (int i = 0; i <= cont; i++){
        printf ("%d\n", dec[i]);
    }*/
    
    //printf ("%d", cont);
    
    for (int i = 0; i <= cont; i++){
        //printf ("\n%d", dec[i]);
        if (cont % 2 == 1 && dec[i] != dec[cont - i]){
            printf ("\nN");
            return 0;
        }
        if (cont % 2 == 0 && i != cont / 2 && dec[i] != dec[cont - i]){
            printf ("\nN");
            return 0;
        }
    }
    printf ("\nS");

    return 0;
}
