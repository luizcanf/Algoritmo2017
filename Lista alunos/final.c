#include<stdio.h>

int main() {
  /*16. Aproveite que é uma pergunta bem fácil:
   faça um  algoritmo que deve esperar que o usuário
    digite um número par.*/
  printf("Olá, usuário. Digite um número par: ");
  int numero, modulo;
  scanf("%i", &numero);
  if (numero < 0) {
    modulo = numero * -1;
  } else {
    modulo = numero;
  }
  /*Enquanto o usuário errar, o algoritmo precisa
   dizer que é um número ímpar e pedir que ele
    digite novamente. (11)*/
  while (modulo%2==1) {
    printf("Porra, c não sabe oq é par??? Digita de novo, kct: ");
    scanf("%i", &numero);
    if (numero < 0) {
      modulo = numero * -1;
    } else {
      modulo = numero;
    }
  }
  printf("Correto, %d é um número par.\n", numero);
  return 0;
}
