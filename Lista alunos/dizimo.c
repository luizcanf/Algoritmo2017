#include<stdio.h>
int main() {
  float salario, dizimo;
  printf("Ol�, diga o valor do seu sal�rio: ");
  scanf("%f", &salario);
  dizimo = 1.1 * salario;
  printf("Voc� deve pagar R$ %.2f de d�zimo\n", dizimo);
  return 0;
}
