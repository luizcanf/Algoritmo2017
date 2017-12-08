#include <stdio.h>

int main() {
	printf("Ola, mundo!\n");
	int posicaoX = 5, posicaoY = 5;
	posicaoY = posicaoY - 1;
	posicaoX = posicaoX - 1;
	posicaoX = posicaoX - 1;
	posicaoX = posicaoX - 1;
	posicaoY = posicaoY - 1;
	posicaoY = posicaoY - 1;
	//printf();
	//printf("A posicao final do passaro e: (2,1)");
	printf("A posicao final do passaro e: (%d,%d)",posicaoX,posicaoY);
	
	return 0;
}
