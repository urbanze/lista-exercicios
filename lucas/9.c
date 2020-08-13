//1.9 Problema dos sucessores
#include <stdio.h>

int main(void) {
  int primo, cont, numero[cont];
  int number;
  do
  {
    printf("Digite um numero entre (1<=N<=1000):");
    scanf("%i", &number);
    numero[cont] = number;
    printf("\n%i\n\n", number);
    cont ++;
  }while(number != 0);

  printf("FIM");

}
