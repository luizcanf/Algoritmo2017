#include<stdio.h>
int main() {
  //Crie um pequeno algoritmo que mostre na tela todos os números pares
  // de zero a dois mil.
  float x = 0.5;
  for (x = 0.5; x < 2001; x = x + 2) {
    int y = (int)&x;
    if ( (int)x % 2 == 0)
      printf("%d\n", y);
    else
      printf("no.");
  }
  return 0;
}
