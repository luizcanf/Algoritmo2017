#include<stdio.h>
int main() {
  float n_1, n_2, r_;
  printf("Digite 2 numeros\n" );
  scanf("%f", &n_1);
  scanf("%f", &n_2);
  r_ = n_1 + n_2;
  printf("Soma: %f\n", r_);
  r_ = n_1 - n_2;
  printf("Subtração: %f\n", r_);
  r_ = n_1 * n_2;
  printf("Multiplicação: %f\n", r_);
  if (n_2 != 0) {
    r_ = n_1 / n_2;
    printf("Divisão: %f\n", r_);
  }
  return 0;
}
