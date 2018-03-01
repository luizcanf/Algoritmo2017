/*2) Leia um vetor de 5 posi��es.
 Escreva os elementos na ordem que eles
  foram digitados e depois na ordem inversa.*/

  #include<stdio.h>

  int main(){
    int tam = 5;
    int vetor[tam];
    printf("Digite os %d valores do vetor:\n", tam);
    for(int i = 0; i < tam; i++){
      printf("Posição %d:", i);
      scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < tam; i++) {
      printf("%d\n", vetor[i]);
    }
    for (int i = tam-1; i >= 0; i=i-1){
      printf("%d\n", vetor[i]);
    }
    return 0;
  }
