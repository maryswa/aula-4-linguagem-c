#include <math.h> //biblioteca de matematica
#include <stdio.h>

int main() {
  // declarando as variaveis
  float a, b, c;

  // entada dos dados
  printf("Digite o valor de b:");
  scanf("%f", &b);

  printf("Digite o valor de c:");
  scanf("%f", &c);

  // calculando o valor de a
  a = sqrt((b * b) + (c * c));

  printf("A hipotenusa do triângulo é: %.1f\n", a);

  return 0;
}