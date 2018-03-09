#include <stdio.h>

int main() {
  int pe = 3, po = 7, t = 3, opcao = -1;
  float ne[t], no[t], ma[t], mp[t];

  while (opcao != 5) {
    printf("Selecione a operacao desejada:\n");
    printf("1- Notas prova escrita\n");
    printf("2- Notas prova oral\n");
    printf("3- Media aritmetica\n");
    printf("4- Media ponderada\n");
    printf("5- Sair\n");

    int i;
    scanf("%d", &opcao);
    switch (opcao) {
      case 1:
        for (i = 0; i < t; i++) {
          scanf("%f", &ne[i]);
        }
      break;
      case 2:
        for (i = 0; i < t; i++) {
          scanf("%f", &no[i]);
        }
      break;
      case 3:
        for (i = 0; i < t; i++) {
          ma[i] = (ne[i]+no[i])/2;
          printf("O aluno %d obteve MA = %.1f\n", i+1, ma[i]);
        }
      break;
      case 4:
        for (i = 0; i < t; i++) {
          mp[i] = (ne[i]*pe+no[i]*po)/(pe+po);
          printf("O aluno %d obteve MA = %.1f\n", i+1, mp[i]);
        }
      break;
      case 5:
        printf("Ate o proximo bimestre!");
      break;
      default:
        printf("Opcao invalida!");
      break;
    }
  }
  return 0;
}
