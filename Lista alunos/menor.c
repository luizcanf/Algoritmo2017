#include <stdio.h>
int main() {
  int x, y;
  printf("Usuário, fofo, digite dois números:\n");
  scanf("%i %i\n", &x, &y);
  if (x > y) {
    printf("%i é o menor\n", y);
  } else if (x < y) {
    printf("%i é o menor\n", x);
  } else {
    printf("Você digitou %i duas vezes\n", y);
  }

  return 0;
}
