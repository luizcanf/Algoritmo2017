#include <stdio.h>
/*Crie um algoritmo que leia um valor inteiro,
 que representa quantos valores precisam ser
 considerados no cálculo de uma média, e depois
 leia esta quantidade de valores reais.
 Em seguida calcule a média entre os números
 reais digitados pelo usuário. (4)*/
int main() {
  int idade;
  printf("Usuário, vacinador, digite a idade da creôncia:\n");
  scanf("%i", &idade);
  if (idade <= 8 || idade >= 17) {
    printf("Não é necessário aplicar vacina.\n");
  } else if (idade >= 9 && idade <= 13) {
    printf("Aplique a vacina A+.\n");
  } else {
    printf("Aplique a vacina B-.\n");
  }
  return 0;
}
