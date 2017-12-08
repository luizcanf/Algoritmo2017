#include <stdio.h>

int main() {
	int A;
	float B = 3.5, C = 7.2;
	A = B + C;
	B = B + C;
	printf("A (int) = %d\n", A);
	printf("B (float) = %.2f\n", B);
	printf("A (float) = %.2f\n", A);
	printf("B (int) = %d\n", B);
	
	B = A;
	printf("corrigindo...\n");
	printf("B (float) = %.2f\n", B);
	
	return 0;
}
