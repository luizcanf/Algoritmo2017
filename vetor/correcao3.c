/*1) Leia um vetor de 10 posicões.
 Contar e escrever quantos valores pares ele possui.*/

#include<stdio.h>

int main(){
  int tam = 9;
  int vetor[tam], somapares = 0, somaimpares = 0;
  printf("Digite os %d valores do vetor:\n", tam);
  for (int i = 0; i < tam; i++){
    scanf("%d", &vetor[i]);
    if(vetor[i]%2==0){
      //par
      somapares = somapares + vetor[i];
    } else {
      //impar
      somaimpares = somaimpares + vetor[i];
    }
  }

  printf("O total dos numeros pares eh %d\n", somapares);
  printf("O total dos numeros impares eh %d\n", somaimpares);
  return 0;
}
