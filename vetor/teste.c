#include<stdio.h>

char mauHumor() {
  printf("\nVocê tinha que me executar? Coisa chata!\n");
  return 'z';
}

float bomHumor() {
  printf("\nQue saudade de você, usuário! Bom dia!!!\n");
  return 42.0;
}

int soma(int x, int y) {
  return x + y;
}

int main() {
  printf("Olá, mundo!");
  printf("\nDigite 1 para bom humor ou 0 para mau humor:\n");
  int codigoExecucao;
  scanf("%d", &codigoExecucao);
  if (codigoExecucao == 1) {
    float resposta = bomHumor();
    printf("%d é o sentido da vida, do universo e tudo o mais.\n", (int) resposta);
  } else {
    mauHumor();
    int a = 2, b = 7;
    printf("Fiz uma soma de %d + %d para você...\nO resultado é %d\n", b, a, soma(a,b));
  }

  int valor;
  printf("Indique o tamanho do vetor que você quer criar:\n" );
  scanf("%d", &valor);
  int valores[valor];

  float notas_1b[42], notas_2b[42];
  //ou
  //float notas[2][42];
  //float avaliacoes[numero_avaliacoes][numero_alunos];


  return (int) bomHumor();
}
