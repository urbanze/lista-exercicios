//1.3 Problema do número espelho

int main(void)
{

  int Comeco, number,numero;
  int inverso = 0;

  printf("Digite um numero em hexadecimal:");
  scanf("%X", &number);
  printf("\nEsse eh o numero %i em DECIMAL.\n\n", number);
  
  numero = number;

  if (number >= 0){

    do 
      {
        Comeco = numero % 10;
        inverso = inverso * 10 + Comeco;
        numero = numero / 10;
      }
      while(numero !=0);
      printf("\n");
  }
  if (inverso == number){
    printf("Numero espelhado");
  }
  
}
