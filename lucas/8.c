#include <stdio.h>
// 1.8 Problema dos casais.
int main(void)
{
  int quant, contpar = 0, contimpar = 0, vet[quant];

  printf("Digite um numero entre [1 a 100]: ");
  scanf("%i", &quant);

  for(int i = 0; i < quant; i++){
    printf("Digite o numero do cartao entre [1 ate 500]: ");
    scanf("%i", &vet[i]);
    if (vet[i] % 2 == 0){contpar++;}
    else{contimpar++;}
  }

  if(contpar == contimpar){
    printf("S");
  }else{
    printf("N");
  }
  
}
