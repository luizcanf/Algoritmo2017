// Bom dia, galera!
#include <stdio.h>

int main () {
	int beeX=3, beeY=6, nectar=0, i=1;
	while (i<=5) {
		beeY--;
		int j=0;
		while(j<i){
			nectar++;
			j++;
		}
		i++;
	}
	printf("A abelha terminou na posicao ");
	printf("(%d,%d) com %d nectares", beeX, beeY, nectar);
	return 0;
}
