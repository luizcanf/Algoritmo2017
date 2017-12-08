#include <stdio.h>

int main() {
	float cotacao, reais;
	printf("Informe o valor da cotacao:\n");
	scanf("%f", &cotacao);
	printf("Informe quantos reais voce deseja converter:\n");
	scanf("%f", &reais);
	float dolares = reais / cotacao;
	printf("Total de US$ = %.2f\n", dolares);
	
	return 0;
}
