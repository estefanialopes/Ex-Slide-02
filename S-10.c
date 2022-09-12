#include <stdio.h>

int main() {

  int Dia;

  printf("Digite um numero:\n");
  scanf("%d",&Dia);

  switch(Dia){
    case 1:
    printf("Domingo");
    break;

    case 2:
    printf("Segunda");
    break;

    case 3:
    printf("Terça");
    break;

    case 4:
    printf("Quarta");
    break;

    case 5:
    printf("Quinta");
    break;

    case 6:
    printf("Sexta");
    break;

    case 7:
    printf("Sábado");
    break;

    default:
    printf("Dia da semana inválido!");
    break;
    }
  return 0;
}
