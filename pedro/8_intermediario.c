#include <stdio.h>
#include <stdlib.h>

int main(){
    int Nv, Nc;
    scanf("%d", &Nv);
    int V[Nv];
    int VAux[Nv];
    
    int m = 50;
    int idx;
    
    int valorV = 0;
    int valorC = 0;
    
    for(int i = 0; i < Nv; i++){
        scanf("%d", &V[i]);
    }
    
    scanf("%d", &Nc);
    int C[Nc];
    
    for(int i = 0; i < Nc; i++){
        scanf("%d", &C[i]);
        valorV = valorV + V[C[i]];
    }
    
    for(int i = 0; i < Nv; i++){
        for(int j = 0; j < Nv; j++){
            if(V[j] < m){
                m = V[j];
                idx = j;
            }
        }
        VAux[i] = m;
        V[idx] = 51;
        m = 50;
        valorC = valorC + VAux[i];
        if (valorC > valorV){
            printf("%d", i);
            return 0;
        }
    }

    return 0;
}
