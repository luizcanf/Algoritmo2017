#include <stdio.h>

int main() {
	float A, B;
	printf("Informe o valor de A:\n");
	scanf("%f", &A);
	printf("Informe o valor de B:\n");
	scanf("%f", &B);
	
	printf("O Valor da soma = %.5f\n", A+B);
	printf("O Valor da subtracao = %.3f\n", A-B);
	printf("O Valor da multiplicacao = %.3f\n", A*B);
	printf("O Valor da divisao = %.3f\n", A/B);
	return 0;
}
