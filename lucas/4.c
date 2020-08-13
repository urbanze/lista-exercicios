#include <stdio.h>
// 1.4 Problema da sequência de Fibonacci
int main(void)
{

  int cont, sequecia, soma;
  int antecessor = 1;
  int antipenultimo = 0;

  printf("Digite um valor entre [1 a 40]:");
  scanf("%i", &sequecia);
  printf("0\n1\n");
  while(cont != sequecia)
  {

    soma = antecessor + antipenultimo;
    printf("%i\n", soma);
    antipenultimo = antecessor;
    antecessor = soma;
    cont += 1;

  }
  
} 
