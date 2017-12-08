#include<stdio.h>

char proximoChar(char a) {
  char x = a + 1;
  return x;
}

int main() {
  printf("Por favor, digite um caractere:\n");
  char j;
  scanf("%c", &j);
  //char j2 = proximoChar(j);
  printf("Você digitou %c e o próximo é %c\n", j, proximoChar(j));
  return 0;
}
