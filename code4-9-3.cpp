// Bom dia, galera!
#include <stdio.h>

int main () {
	int beeX=3, beeY=6, nectar=0;
	for (int counter = 1; counter<=5; counter++) {
		beeY--;
		int contador2=0;
		while(contador2<counter){
			nectar++;
			contador2++;
		}
	}
	printf("A abelha terminou na posicao ");
	printf("(%d,%d) com %d nectares", beeX, beeY, nectar);
	return 0;
}
