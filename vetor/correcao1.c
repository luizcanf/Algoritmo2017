#include <stdio.h>

void facinho() {
  int i;
  char texto[7]/* = {'o','h','n',''}*/;
  /*int numeros[3] = {1,7,-6};*/
  texto[0] = 'o';
  texto[1] = 'h';
  texto[2] = 'n';
  texto[3] = 'i';
  texto[4] = 'c';
  texto[5] = 'a';
  texto[6] = 'f';
  for (i = 6; i >= 0; i--) {
    printf("%c", texto[i]);
  }
  printf("\n");
}

int main() {
  printf("Quantas vezes? ");
  int vezes = -3;
  while (vezes <= 0) {
    scanf("%d", &vezes);
    if (vezes <= 0) {
      printf("valor inválido. Digite novamente: \n");
    }
  }
  int x = 1;
  while (x <= vezes) {
    facinho();
    x++;
  }
  /*for (int x =1; x <= vezes; x++) {}*/
  return 0;
}
