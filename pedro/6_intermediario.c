#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z = 1;
    int cont = 0;
    int *k;
    int *k1;
    int matriz[100][100];
    int contMatriz = 1;
    int contElementos = -1;
    int *moda;
    int m = 0;
    int n = 0;
    int contModa = 0;
    //int aux[100];
    int idx = 0;
    
    k = (int*)malloc(1 * sizeof(int));
    //moda = (int*)malloc(1 * sizeof(int));
    
    while(z != 0){
        scanf("%d", &z);
        if(z != 0){
            k[cont] = z;
            k1 = (int*)malloc((cont + 1) * sizeof(int));
            for(int i = 0; i <= cont; i++){
                k1[i] = k[i];
            }
            k = (int*)malloc((cont + 1) * sizeof(int));
            for(int i = 0; i <= cont; i++){
                k[i] = k1[i];
            }
            cont = cont + 1;
        }
    }
    
    //printf("%d\n", cont);
    
    /*for(int i = 0; i < cont; i++){
        printf("%d\n", k[i]);
        printf("%d\n", k1[i]);
    }*/
    
    for(int i = 0; i < cont; i++){
        if(k[i] != 0){
            contElementos = contElementos + 1;
            for(int j = i + 1; j < cont; j++){
                if(k[j] == k[i]){
                    k[j] = 0;
                    contMatriz = contMatriz + 1;
                }
            }
            //matriz = (int**)realloc(matriz, contElementos * sizeof(int*));
            matriz[contElementos][0] = k[i];
            matriz[contElementos][1] = contMatriz;
            contMatriz = 1;
        }
    }
    
    for(int j = 0; j <= contElementos; j++){
        if(matriz[j][1] > m){
            m = matriz[j][1];
        }
    }
    
    for(int i = 0; i <= contElementos;i++){
        if(matriz[i][1] == m){
            moda = (int*)realloc(moda, (contModa + 1) * sizeof(int));
            moda[contModa] = matriz[i][0];
            contModa = contModa + 1;
        }
    }
    
    //int moda[contModa];
    int aux[contModa];
    
    //printf("%d\n", contModa);

    m = 256;
    
    for(int i = 0; i < contModa; i++){
        for(int j = 0; j < contModa; j++){
            if(moda[j] < m){
                m = moda[j];
                idx = j;
            }
        }
        aux[i] = m;
        m = 256;
        moda[idx] = 256;
    }
    
    for(int i = 0; i < contModa; i++){
        printf("%d\n", aux[i]);
    }

    return 0;
}
