#include <stdio.h>

int main() {
	int A, B, C, D;
	printf("Informe o valor de A:\n");
	scanf("%d", &A);
	printf("Informe o valor de B:\n");
	scanf("%d", &B);
	printf("Informe o valor de C:\n");
	scanf("%d", &C);
	
	D = (A*A)+(B*B)+(C*C);
	
	printf("O Valor da soma dos quadrados = %d\n", D);
	return 0;
}
