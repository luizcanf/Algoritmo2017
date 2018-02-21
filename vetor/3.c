/*Vetores (arrays) s�o vari�veis que armazenam v�rios valores
 de um mesmo tipo. Fa�a um programa que permita o usu�rio
 escolher opera��es entre vetores (Soma, Subtra��o e Multiplica��o),
 exiba o resultado e volte ao menu.
 Sempre se lembre da op��o de sair no menu.*/

#include<stdio.h>
#define tam 2

int tu[tam], a[tam], resultado[tam];
char letra;
char palavra[10];
int numero;
int numeros[100];




int somaVetores() {
  printf("somando os valores dos vetores:\n");
  for (int i = 0; i < tam; i++) {
    resultado[i] = tu[i] + a[i];
    printf("%d\n", resultado[i]);
  }
}

int subtraiVetores() {
  printf("subtraindo os valores dos vetores:\n");
  for (int i = 0; i < tam; i++) {
    resultado[i] = tu[i] - a[i];
    printf("%d\n", resultado[i]);
  }
}

int multiplicaVetores() {
  printf("multiplicando os valores dos vetores:\n");
  for (int i = 0; i < tam; i++) {
    resultado[i] = tu[i] * a[i];
    printf("%d\n", resultado[i]);
  }
}

int divideVetores() {
  printf("dividindo os valores dos vetores:\n");
  for (int i = 0; i < tam; i++) {
    if (a[i] == 0) {
      printf("Não é possível dividir por 0.\n");
    } else {
      resultado[i] = tu[i] / a[i];
      printf("%d\n", resultado[i]);
    }
  }
}


int main() {
  printf("Bom dia, usuário!\nHoje estamos trabalhando com vetores de tamanho %d.\n", tam);
  printf("Escreva os valores do vetor TU:\n" );
  for (int i = 0; i < tam; i++) {
    scanf("%d", &tu[i]);
  }

  printf("Escreva os valores do vetor A:\n" );
  for (int i = 0; i < tam; i++) {
    scanf("%d", &a[i]);
  }

/*MENU!*/
/*Fa�a um programa que permita o usu�rio
escolher opera��es entre vetores (Soma, Subtra��o e Multiplica��o),
exiba o resultado e volte ao menu.
Sempre se lembre da op��o de sair no menu.*/

int opcao = 1;
while (opcao != 5) {
  printf("Selecione a operação desejada:\n");
  printf("1- Soma\n2- Subtração\n3- Multiplicação\n4- Divisão\n5- Sair\n");
  scanf("%d", &opcao);
  switch (opcao) {
    case 1:
      somaVetores();
      break;
    case 2:
      subtraiVetores();
      break;
    case 3:
      multiplicaVetores();
      break;
    case 4:
      divideVetores();
      break;
    case 5:
      printf("Obrigado por utilizar nosso software.\n");
      break;
    default:
      printf("Opção inválida.\n");
  }
}

  return 0;
}
