#include <stdio.h>
#include <stdlib.h>
float F(float num1);
float C(float num1);

int main() {
  double num1;
  int Conversion;

  printf("Introduce el numero de grados que quieres converitir: ");
  scanf("%lf", &num1);

  printf("Introduce la conversion (Farenheit, Celsius): ");
  scanf("%i", &Conversion);

  switch (Conversion) {
    case 1:
      printf("La conversion de Celsius a Farenheit es igual a: %lf\n", F(num1));
      break;
    case 2:
      printf("La conversion de Farenheit a Celsius es igual a: %lf\n", C(num1));
      break;
    default:
      printf("Operacion no valida.\n");
  }

  return 0;
}

float F(float num1) {
  resultado = resultado
  return resultado;
}

float C(float num1) {
    float resultado = num1-32;
    resultado = resultado*5/9;
    return resultado;

}
