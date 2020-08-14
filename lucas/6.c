// 1.6 Problema do quadrado gêmeo das partes

#include <stdio.h>

int number, div, meio1, meio2, soma, multi;
int casa = 0;

void condicoes(){
  if (multi == number){
        printf("O numero %i eh de KAPREKAR", multi);
      }else{
        printf("O numero %i nao eh KAPREKAR", number);
      }

}
int main(void)
{

  printf("Digite um numero entre (1<=N<=100.000.000):");
  scanf("%d", &number);
  div = number;
  while(div > 9 ){
    casa++;
    div = div/10;
  }
  casa++;
  if (number < 100000000){
    if(casa == 2){
    meio2 = number / 10 % 10;
    meio1 = number % 10;
    soma = meio2 + meio1;
    multi = soma*soma;
    condicoes();
    }else if(casa == 4){
      meio1 = number / 100 % 100;
      meio2 = number % 100;
      soma = meio2 + meio1;
      multi = soma*soma;
      condicoes();
    }else if(casa == 6){
      meio1 = number / 1000 % 1000;
      meio2 = number % 1000;
      soma = meio2 + meio1;
      multi = soma*soma;
      condicoes();   
    }else if(casa == 8){
      meio1 = number / 10000 % 10000;
      meio2 = number % 10000;
      soma = meio2 + meio1;
      multi = soma*soma;
      condicoes();  
    }else{
      printf("INVALIDOl!!!");
    }
  }else{printf("INVALIDO!!!");}
}
