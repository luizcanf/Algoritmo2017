#include <stdio.h>
/*Crie um algoritmo que leia um valor inteiro,
 que representa quantos valores precisam ser
 considerados no cálculo de uma média, e depois
 leia esta quantidade de valores reais.
 Em seguida calcule a média entre os números
 reais digitados pelo usuário. (4)*/
int main() {
  int x;
  printf("Usuário, mala, digite quantos valores para cálculo da média:\n");
  scanf("%i", &x);
  float valor[x];
  int i = 0;
  printf("Digite agora os valores:\n");
  while (i < x) {
    scanf("%f", &valor[i]);
    i++;
  }
  i = 0;
  float soma = 0;
  while (i < x) {
    soma = soma + valor[i];
    i++;
  }
  float media = soma / x;
  printf("A média é %g\n", media);
  return 0;
}
