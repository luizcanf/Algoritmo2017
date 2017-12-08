// Faça um algoritmo que escreve na tela o dobro de um valor digitado pelo usuário
#include<stdio.h>

int main() {
  int A;
  printf("escreva um número:\n");
  scanf("%d", &A);
  printf("o valor digitado é %d\n",A);
  A = A * 2;
  printf(" o dobro do valor é %d\n",A );
  return 0;
}
