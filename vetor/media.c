#include<stdio.h>
// FAÇAM um programa que calcula a MEDIA
// entre uma quantidade de valores
// que o usuario vai dizer.
// Implementem o código utilizando VETORES.
//  =D

int main() {
  int qtde = 0;
  while (qtde <= 1) {
    printf("Quantos valores serão considerados na média (maior que 1)?\n");
    scanf("%d", &qtde);
  }
  float valores[qtde], soma=0, media;
  int i;
  printf("Digite %d valores reais:\n", qtde);
  for (i = 1; i <= qtde; i++) {
    printf("Digite o %do valor: ", i);
    scanf("%f", &valores[i]);
    soma += valores[i];
  }
  media = soma / qtde;
  printf("Média = %f\n", media);
  return 0;
}
