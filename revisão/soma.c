
// FaÃ§a um algoritmo que escreve na tela a soma de dois valores digitados pelo usuÃ¡rio
// exemplo: o usuÃ¡rio digita 2 e 3, e a saÃ­da tem que ser "2 + 3 = 5"
#include<stdio.h>

int main() {
  int A,B;
  printf("digite dois números\n");
  scanf("%d %d", &A, &B );
  printf("os números digitados foram %d e %d\n", A , B);
  //int c = A+B;
  printf("%d + %d = %d\n", A , B, A+B);
  return 0;
}
