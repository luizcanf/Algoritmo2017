#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	printf("Por favor, digite 2 n�meros inteiros...\n R�PIDO!\n");
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	c = a*a - b*b;
	printf("O resultado da diferen�a entre os quadrados � ");
	printf("%d", c);
	return 0;
}
