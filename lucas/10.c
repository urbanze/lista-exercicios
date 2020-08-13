//10 Problema do quadrado perfeito

#include <stdio.h>

int main(void) {
  int quadrado, number;
  int cont = 0;
  do
  {
    printf("Digite um numero entre -10000<=J<=10000:");
    scanf("%i", &number);
    for(int i = (number-1); i > 0; i--){
      int multi;
      multi = i * i;
      if (multi == number){
        cont++;
        
      }
    }
  }while(number != 0);

  printf("%i", cont);

}
