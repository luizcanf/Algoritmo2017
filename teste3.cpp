#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	printf("Por favor, digite 2 números inteiros...\n RÁPIDO!\n");
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	c = a*a - b*b;
	printf("O resultado da diferença entre os quadrados é ");
	printf("%d", c);
	return 0;
}
