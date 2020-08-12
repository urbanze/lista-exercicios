#include <stdio.h>
// 1.2 Problema da média
int main(void)
{

  int number;
  int soma = 0;
  float media;

  printf("Escreva a quatidade de numeros:");
  scanf("%i", &number);

  for (int i = 1 ; i <= number; i++)
  {

    soma = soma + i;

  }

  media = soma/number;
  printf("A media eh %.1f", media);

}
