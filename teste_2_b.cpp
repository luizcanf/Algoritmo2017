#include <stdio.h>

int avance() {
	return 0;
}

int main() {
	int x = 3, y = 4, nectar=0, i=0;
	//repita (3x): {
	//vireesquerda();
	//avance();
	//avance();
	//coletenectar(); }
	
	//y--;y--;
	while (i<2) {
		y--;
		i++;
	} 
	i = 0;
	nectar++;
	//x++;	x++;
	while (i<2) {
		x++;
		i++;
	}
	i = 0;
	nectar++;
	//y++;	y++;
	while (i<2) {
		y++;
		i++;
	}
	nectar++;
	printf("Resumo da Abelha:\n");
	printf("A posicao final da abelha (%d,%d)\n", x, y);
	printf("Ela coletou %d nectares.", nectar);
	return 0;
}
