#include<stdio.h>

float fatorial(float num) {
  float fat = 1;
  for (float i = num; i >= 1; i--) {
    fat = fat * i;
  }
  return fat;
}

float fatorialRecursivo(float num) {
  float fat;
  if (num == 1) {
    fat = 1;
  } else {
    fat = num * fatorialRecursivo(num - 1);
  }
  return fat;
}

float main() {
  printf("Digite 1 valor inteiro: ");
  float numero;
  scanf("%f", &numero);

  printf("%.0f! = %.0f\n", numero, fatorialRecursivo(numero));
  return 0;
}
