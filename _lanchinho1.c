#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  //declaração de variáveis
  int cod, qnt;
  float total;

  printf("Insira o código e quantidade: ");
  scanf("%d %d", &cod, &qnt);

  switch (cod)
  {
case 1:
    total = qnt * (3.00);
    break;
case 2:
    total = qnt * (2.50);
    break;
case 3:
    total = qnt * (5.00);
    break;
case 4:
    total = qnt * (4.50);
    break;
case 5:
    total = qnt * (1.50);
    break;
default:
    printf("Código inválido");
    break;

  }


  printf("Total: R$ %.2f\n", total); //Mostra mensagem com o resultado

  //system ("pause");
  return(0);
}
