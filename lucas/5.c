1.5 Problema da conjectura de goldbach
#include <stdio.h>

int main(void) {
  int aux = 0;
  int cont = 1;
  int primo = 0;
  int numero, subt;
  int vetor[1000000];
  int soma = 0; 
  printf("Digite um numero PAR [ ENTRE 2<=P<=4294967294]:");
  scanf("%d", &numero);
  for (int t = 1; t <= numero; t++){
    while(cont <= t)
    {
      if (t % cont == 0){
        aux++;
      }
      cont++;
    }
    if (aux == 2)
    {
      vetor[primo] = t;
      primo++;
    }
    aux = 0;
    cont = 1;   
  }
  for(int i = 0; i < primo; i++){
    int vetorr[i], somat;
    subt = numero - vetor[i];
    vetorr[soma] = subt;
    for (int t = 0; t < primo; t ++){
      if(subt == vetor[t]){
        somat = 0;
        printf("%i + %i = %i\n", vetor[t], vetor[i], numero);
        somat++;
        break;
      }

    }
    soma++;
    if (somat == 1){
      break;
    } 
  }
  
}
