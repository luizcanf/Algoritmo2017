/*1) Leia um vetor de 10 posicões.
 Contar e escrever quantos valores pares ele possui.*/

#include<stdio.h>

int main(){
  int tam = 10;
  int vetor[tam], contpar = 0;
  printf("Digite os %d valores do vetor:\n", tam);
  for (int i = 0; i < tam; i++){
    scanf("%d", &vetor[i]);
  }
  for (int i = 0; i < tam; i++) {
    if((vetor[i])%2==0){
      printf("O valor %d é par\n", vetor[i]);
      contpar = contpar + 1;
      //contpar++;
    }
  }
  printf("Foram digitados %d números pares\n", contpar);
  return 0;
}
