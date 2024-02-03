#include <stdio.h>
#include <stdlib.h>
int main() {
  int num1;
  int Conversion;

int F(int num1) {
  return (num1*1,8) + 32;
}

int C(int num1) {
  return (num1 - 32) / 18;
}

  printf("Introduce el numero de grados que quieres converitir: ");
  scanf("%d", &num1);

  printf("Introduce la conversion (Farenheit, Celsius): ");
  scanf(" %c", &Conversion);

  switch (Conversion) {
    case 1:
      printf("La conversion de Farenheit a Celsius es igual a: %d\n", num1, F (num1));
      break;
    case 2:
      printf("La conversion de celsius a Farenheit es igual a: %d\n", num1, C(num1));
      break;
    default:
      printf("Operación no valida.\n");
  }

  return 0;
}
