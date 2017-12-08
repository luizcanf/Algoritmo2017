#include <stdio.h>
int main() {
  int x;
  char a;
  printf("Usuário, fofo, digite uma letra e depois um número:\n");
  scanf("%c\n", &a);
  scanf("%i\n", &x);
  printf("..%c%d..\n =D\n", a, x);
  return 0;
}
