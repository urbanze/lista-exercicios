#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> 

int main(){
    int n;
    scanf ("%d", &n);
    int k[n];
    int aux[n];
    
    int m = 1000;
    int idx;
    
    for (int i = 0; i < n; i++){
        scanf("%d", &k[i]);
    }
    
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (k[i] == k[j]){
                k[j] = 1001;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (k[j] < m){
                m = k[j];
                idx = j;
            }
            if (j == n - 1){
                aux[i] = m;
                k[idx] = 1001;
                m = 1001;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        if (aux[i] < 1001){
            printf ("%d\n", aux[i]);
        }
    }
    
    return 0;
}
