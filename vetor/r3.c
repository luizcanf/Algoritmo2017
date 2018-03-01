/*3) Escreva um programa com o seguinte menu:
 Editar valor do operando 1
 Editar valor do operando 2
 Soma
 Multiplica��o
 Exponencia��o
 Sair.

  "Editar valor do operando 1" e "Editar valor do operando 2"
   l�em do usu�rio um novo valor para as respectivas vari�veis;
  "Soma" passa o valor das 2 vari�veis para uma fun��o
   que escreve na tela o valores dos 2 operandos e da sua soma;
  "Multiplica��o" passa o valor das 2 vari�veis para uma fun��o
   que escreve na tela o valores dos 2 operandos e da sua multiplica��o;
  "Exponencia��o" passa o valor das 2 vari�veis para uma fun��o
   que escreve na tela o valores dos 2 operandos
    e do 1� operando elevado ao 2� operando.*/

#include<stdio.h>

int soma(int a, int b) {
  printf("Executando a soma\n");
  printf("%d + %d = %d\n", a, b, a+b);
}

int mult(int a, int b) {
  printf("Executando a multiplicação\n");
  printf("%d x %d = %d\n", a, b, a*b);
}

int expo(int a, int b) {
  printf("Executando a exponenciação\n");
  int potencia = a;
  for (int i = 1; i < b; i++) {
    potencia = potencia*a;
  }
  printf("%d ^ %d = %d\n", a, b, potencia);
}

int main() {

    int opcao = 1, x, y;
    while (opcao != 6) {
    printf("Selecione a operação desejada:\n");
    printf("1- Editar valor do operando 1\n");
    printf("2- Editar valor do operando 2\n");
    printf("3- Soma\n");
    printf("4- Multiplicação\n");
    printf("5- Exponenciação\n");
    printf("6- Sair\n");

    scanf("%d", &opcao);
    switch (opcao) {
      case 1:
        printf("Digite o valor do X:\n");
        scanf("%d", &x);
        break;
      case 2:
        printf("Digite o valor do Y:\n");
        scanf("%d", &y);
        break;
      case 3:
        soma(x, y);
        break;
      case 4:
        mult(x, y);
        break;
      case 5:
        expo(x, y);
        break;
      case 6:
        printf("Obrigado por utilizar nosso software.\n");
        break;
      default:
        printf("Opção inválida.\n");
    }
  }

    return 0;
}
