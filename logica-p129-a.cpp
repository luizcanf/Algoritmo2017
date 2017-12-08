// Bem-vindos ao nosso 1º CODING DOJO!
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	// quadrados de 15 a 200
	int x = 15, y = 200, a;
	while(x<=200){
	a = x * x;	
		printf("quadrado de %d: %d\n", x,a);
		x++;
	}
	
	return 0;
}
