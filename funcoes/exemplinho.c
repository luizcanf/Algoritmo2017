#include<stdio.h>

void somaInt() {
  int x, y;
  printf("Digite 2 inteiros:\n" );
  scanf("%d %d", &x, &y);
  printf("Somando %d e %d obtemos %d", x, y, x+y);
}

void main() {
  somaInt();
}
