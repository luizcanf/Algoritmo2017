#include <stdio.h>

int main() {
	printf("\tMillena\n");
	printf("ANGRY BIRD\n");
	
	int birdX, birdY;
	
	char letra;
	printf("uma letra: ");
	scanf("%c", &letra);
	printf("Voce digitou: %c", letra);
	
	printf("\nDigite a posicao inicial no eixo X:");
	scanf("%d", &birdX);
	printf("\nDigite a posicao inicial no eixo Y:");
	scanf("%d", &birdY);
	
	//birdY = 3, birdX = 19
	birdY = birdY - 1;
	//birdY = 2, birdX = 19
	birdX = birdX - 1;
	birdX = birdX - 1;
	birdX = birdX - 1;
	//birdY = 2, birdX = 16
	birdY = birdY - 1;
	birdY = birdY - 1;
	//birdY = 0, birdX = 16
	
	printf("O valor de X e igual a %d", birdX);
	//O valor de X e igual a 16
	printf("\nA posicao final do passaro e: (%d,%d)", birdX, birdY);
	//A posicao final do passaro e: (16,0)
	return 0;
}




