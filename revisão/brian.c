#include<stdio.h>
int main() {
  float n_1, n_2, r_;
  printf("Digite 2 numeros\n" );
  scanf("%f", &n_1);
  scanf("%f", &n_2);
  r_ = n_1 + n_2;
  printf("Soma: %f\n", r_);
  r_ = n_1 - n_2;
  printf("Subtra��o: %f\n", r_);
  r_ = n_1 * n_2;
  printf("Multiplica��o: %f\n", r_);
  if (n_2 != 0) {
    r_ = n_1 / n_2;
    printf("Divis�o: %f\n", r_);
  }
  return 0;
}
