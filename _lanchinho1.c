#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  //declara��o de vari�veis
  int cod, qnt;
  float total;

  printf("Insira o c�digo e quantidade: ");
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
    printf("C�digo inv�lido");
    break;

  }


  printf("Total: R$ %.2f\n", total); //Mostra mensagem com o resultado

  //system ("pause");
  return(0);
}
