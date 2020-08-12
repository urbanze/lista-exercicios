#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    int checa = 0;
    scanf ("%d", &num);
    
    if (num % 2 == 0 && num > 4 && num <= 4294967294){
        for (int i = 2; i < num; i++){
            for (int j = 2; j <= (i / 2) + 1; j++){
                if (j == (i / 2) + 1 && i % j != 0){
                    for (int k = i; k < num; k++){
                        for (int l = 2; l <= (k / 2) + 1; l++){
                            if (l == (k / 2) + 1 && k % l != 0){
                                if (i + k == num){
                                    printf ("%d\n%d", i, k);
                                    return 0;
                                }
                            }
                            if (k % l == 0){
                                break;
                            }
                        }
                    }
                }
                if (i % j == 0){
                    break;
                }    
            }
        }
    }
    
    if (num == 4){
        printf ("2\n2");
    }

    return -1;
}
