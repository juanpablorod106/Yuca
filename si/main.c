#include <stdio.h>
#include <stdlib.h>
int main() {
  int num1, num2;
  char operacion;

int sumar(int num1, int num2) {
  return num1 + num2;
}

int restar(int num1, int num2) {
  return num1 - num2;
}

int multiplicar(int num1, int num2) {
  return num1 * num2;
}

float dividir(int num1, int num2) {
  return num1 / num2;
}

  printf("Introduce el primer numero: ");
  scanf("%d", &num1);
  printf("Introduce el segundo numero: ");
  scanf("%d", &num2);

  printf("Introduce la operacion (+, -, *, /): ");
  scanf(" %c", &operacion);

  switch (operacion) {
    case '+':
      printf("La suma de %d y %d es: %d\n", num1, num2, sumar(num1, num2));
      break;
    case '-':
      printf("La resta de %d y %d es: %d\n", num1, num2, restar(num1, num2));
      break;
    case '*':
      printf("La multiplicacion de %d y %d es: %d\n", num1, num2, multiplicar(num1, num2));
      break;
    case '/':
      printf("La division de %d y %d es: %.2f\n", num1, num2, dividir(num1, num2));
      break;
    default:
      printf("Operación no valida.\n");
  }

  return 0;
}

