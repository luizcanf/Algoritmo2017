#include <stdio.h>

int main() {
	int A, B, C, D, soma, mult;
	printf("Brother, digita aí 4 inteiros?\n");
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);
	// distributiva da adição
	printf("O resultado da distributiva da adicao = ");
	soma = (A+B)+(A+C)+(A+D)+(B+C)+(B+D)+(C+D);
	printf("%d\n", soma);
	
	printf("O resultado da distributiva da multiplicacao = ");
	mult = (A*B)+(A*C)+(A*D)+(B*C)+(B*D)+(C*D);
	printf("%d\n", mult);
	
	return 0;
}
