#include<stdio.h>
int main() {
  float salario, dizimo;
  printf("Olá, diga o valor do seu salário: ");
  scanf("%f", &salario);
  dizimo = 1.1 * salario;
  printf("Você deve pagar R$ %.2f de dízimo\n", dizimo);
  return 0;
}
