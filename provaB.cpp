#include <stdio.h>
int main() {
	int x = 2, y = 3, z;
	z = y%x;
	switch (z) {
		case 0: printf("y eh impar.");
				break;
		case 1: printf("y eh par.");
				break;
	}
	return 0;
}
