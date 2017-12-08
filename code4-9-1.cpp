// Bom dia, galera!
#include <stdio.h>

int main () {
	int beeX=1, beeY=4, nectar=0, i=0;
	while (i<5) {
		beeX++;
		nectar++;
		i++;
	}
	printf("A abelha terminou na posicao ");
	printf("(%d,%d) com %d nectares", beeX, beeY, nectar);
	return 0;
}
