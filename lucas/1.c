#include <stdio.h>
#include <string.h>

// 1.1 Problema da soma
int main(void)
{
  int number;
  int soma = 0;
  int soma_par = 0;
  int soma_impar = 0;

  printf("Digite um valor [entre 1 a 1000]:");
  scanf("%i", &number);

  for(int i = number; i > 0; i--){
    soma += i;
    if (i % 2 == 0)
    {
      soma_par += i;
    }else{
      soma_impar += i;
    }
  }
  printf("Essa eh a soma total em decimal: %i\n", soma);
  printf("Essa eh a soma dos pares em hexadecimal: %2X\n", soma_par);
  printf("Essa eh a soma dos impares em octal: %o", soma_impar); 
   
}
