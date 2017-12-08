#include<stdio.h>

// FAÇAM um programa que calcula a MEDIA
// entre uma quantidade de valores
// que o usuario vai dizer.
// Implementem o código utilizando VETORES.
//  =D

int somaAbobada() {
  int a, b, c, d;
  printf("Digite 3 inteiros:");
  scanf("%d %d %d", &a, &b, &d);
  c = a + b + d;
  printf("%d+%d+%d=%d\n",a,b,d,c);
  return c;
}

int somaMallandra() {
  int a, soma = 0;
  for (int i = 0; i < 5; i++) {
    printf("Digite 1 inteiro:");
    scanf("%d", &a);
    soma = a + soma;
  }
  printf("A soma é %d\n", soma);
  return soma;
}

int somaComVetor(int x) {
  int vet[x], soma = 0;
  for (int i = 0; i < x; i++) {
    printf("Digite 1 inteiro:");
    scanf("%d", &vet[i]);
    soma = vet[i] + soma;
  }
  for (int i = 0; i < x; i++) {
    if (i == 0) {
      printf("%d", vet[i]);
    } else {
      printf("+%d", vet[i]);
    }
  }
  printf("=%d\n", soma);
}

int main() {
  int y;
  printf("Tamanho do vetor: ");
  scanf("%d", &y);
  int c = somaComVetor(y);
  return c;
}
