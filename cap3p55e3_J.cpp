#include <stdio.h>

int main() {
	//int A, B, C;
	int A, B;
	printf("Informe o valor de A:\n");
	scanf("%d", &A);
	printf("Informe o valor de B:\n");
	scanf("%d", &B);
	
	/*C = A - B;
	C = C * C;*/
	
	printf("O Valor do quadrado da diferenca = %d\n", (A-B)*(A-B));
	return 0;
}
