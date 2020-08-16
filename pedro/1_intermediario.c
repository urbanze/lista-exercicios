#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> 

int **var1(int n, int nn, int **tabela, int *cont) {
    int **copia;
    
    copia = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        copia[i] = (int*)malloc(nn * sizeof(int));
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < nn; j++){
            copia[i][j] = tabela[i][j];
        }
    }
    
    int m;
    int idx;
    
    int aux [n][nn];
      
    for (int i = 0; i < n; i++){
        for (int j = 0; j < nn; j++){
            for (int k = 0; k < n; k++){
                if (k == 0){
                    m = tabela[i][0];
                    idx = 0;
                }
                if (i % 2 == 1){
                    if (tabela[i][k] > m){
                        m = tabela[i][k];
                        idx = k;
                    }
                }
                else{
                    if (tabela[i][k] < m){
                        m = tabela[i][k];
                        idx = k;
                    }
                }
                if (k == nn - 1){
                    aux[i][j] = m;
                    if (i % 2 == 1){
                        tabela[i][idx] = 0;
                    }
                    else{
                        for (int l = 0; l < nn; l++){
                            tabela[i][idx] = tabela[i][idx] + tabela[i][l];
                        }
                    }
                }
            }
        }
    }
    
    printf ("Primeira variação:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < nn; j++){
            printf ("%d ", aux[i][j]);
        }
        printf ("\n");
    }
      
    return copia;
}

int **var2(int n, int nn, int **tabela, int *cont) {
    int **copia;
    
    copia = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        copia[i] = (int*)malloc(nn * sizeof(int));
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < nn; j++){
            copia[i][j] = tabela[i][j];
        }
    }
    
    int m;
    int idx;
    
    int aux [n][nn];
      
    for (int i = 0; i < n; i++){
        for (int j = 0; j < nn; j++){
            for (int k = 0; k < nn; k++){
                if (k == 0){
                    m = tabela[i][0];
                    idx = 0;
                }
                if (cont[i] == 1){
                    if (tabela[i][k] > m){
                        m = tabela[i][k];
                        idx = k;
                    }
                }
                if (cont[i] == 0){
                    if (tabela[i][k] < m){
                        m = tabela[i][k];
                        idx = k;
                    }
                }
                if (cont[i] > 1){
                    aux[i][k] = tabela[i][k];
                }
                if (k == nn - 1 && cont[i] <= 1){
                    aux[i][j] = m;
                    if (cont[i] == 1){
                        tabela[i][idx] = 0;
                    }
                    if (cont[i] == 0){
                        for (int l = 0; l < nn; l++){
                            tabela[i][idx] = tabela[i][idx] + tabela[i][l];
                        }
                    }
                }
            }
        }
    }
    
    printf ("Segunda variação:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < nn; j++){
            printf ("%d ", aux[i][j]);
        }
        printf ("\n");
    }
      
    return copia;
}

int var3(int n, int nn, int **tabela, int *cont) {
    int m;
    int idx;
    
    int aux [n][nn];
      
    for (int i = 0; i < n; i++){
        for (int j = 0; j < nn; j++){
            for (int k = 0; k < nn; k++){
                if (k == 0){
                    m = tabela[i][0];
                    idx = 0;
                }
                if (cont[i] < 10){
                    if (tabela[i][k] > m){
                        m = tabela[i][k];
                        idx = k;
                    }
                }
                if (cont[i] >= 10 && cont[i] <20){
                    if (tabela[i][k] < m){
                        m = tabela[i][k];
                        idx = k;
                    }
                }
                if (cont[i] >= 20){
                    aux[i][k] = tabela[i][k];
                }
                if (k == nn - 1 && cont[i] < 20){
                    aux[i][j] = m;
                    if (cont[i] < 10){
                        tabela[i][idx] = 0;
                    }
                    if (cont[i] >= 10){
                        for (int l = 0; l < nn; l++){
                            tabela[i][idx] = tabela[i][idx] + tabela[i][l];
                        }
                    }
                }
            }
        }
    }
    
    printf ("Terceira variação:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < nn; j++){
            printf ("%d ", aux[i][j]);
        }
        printf ("\n");
    }
      
    return 0;
}

int main(){
    int n;
    int nn;
    int contador;
    int contadorDiv;
    int checa;
    
    int **tabela;
    
    printf ("Digite o número de sequências: ");
    scanf ("%d", &n);
    printf ("Digite o número de elementos por sequência: ");
    scanf ("%d", &nn);
    
    tabela = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        tabela[i] = (int*)malloc(nn * sizeof(int));
    }
    
    int cont[n];
    int contDiv[n];
    
    for (int i = 0; i < n; i++){
        contador = 0;
        contadorDiv = 0;
        checa = 0;
        for (int j = 0; j < nn; j++){
            contadorDiv = contadorDiv + 2;
            printf ("Digite o %d elemento da %d sequência: ",j + 1, i + 1);
            scanf ("%d", &tabela[i][j]);
            if (tabela[i][j] == 2){
                contador = contador + 1;
            }
            else{
                for (int k = 2; k < tabela[i][j]; k++){
                    if (tabela[i][j] % k == 0){
                        checa = 1;
                        contadorDiv = contadorDiv + 1;
                    }
                    if (k == tabela[i][j] - 1 && checa == 0){
                        contador = contador + 1;
                    }
                }
            }
        }
        cont[i] = contador;
        contDiv[i] = contadorDiv;
    }
    
    int **z = var1(n, nn, tabela, cont);
    z = var2(n, nn, z, cont);
    var3(n, nn, z, contDiv);
    
    return 0;
}
