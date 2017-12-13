#include<stdio.h>
int main() {
  int inicial=0, final=0, i;
  while (final <= inicial) {
    printf("Digite 2 inteiros diferentes (em ordem crescente):\n" );
    scanf("%d %d", &inicial, &final);
  }
  /*if (inicial>final) {
    i = inicial;
    inicial = final;
    final = i;
  }*/
  i = inicial;
  printf("Do menor para o maior\n");
  while (i <= final) {
    printf("%d\n", i);
    i++;
  }
  i = final;
  printf("Do maior para o menor\n");
  while (i >= inicial) {
    printf("%d\n", i);
    i--;
  }

}
