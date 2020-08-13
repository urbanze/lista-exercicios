#include <stdio.h>
#include <math.h>

int main() {
  int j = 1;
  int cont = 0;
  
  while (j != 0){
      scanf ("%d", &j);
      if (j != 0){
          for (int i = 0; i < j; i++){
              if (j == pow(i, 2)){
                  cont = cont + 1;
              }
          }
      }
  }
  printf ("%d", cont);
  
  return 0;
}
