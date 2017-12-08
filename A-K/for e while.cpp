#include <stdio.h>
#include <locale.h>

int main() {
	// repitindo código, estilo ctrl+c, ctrl+v
	printf("Olá, galera!\n");
	setlocale(LC_ALL, "");
	printf("Olá, galera!\n");
	// muito eficiente quando só precisa repetir 2x...
	// entretanto, se eu pedir para escrever algo 100x? 	int i = 0;
	/* tem q existir um jeito menos idiota de fazer,
	sem ser copiar e colar isso várias vezes...
	inclusive por que, se eu precisar mudar o código,
	vou ter um trabalhão todo de novo...*/
	int /*variavel de acumulação*/i = 0;
	printf("Agora, vamos usar estruturas de repetição:\n");
	//while = enquanto
	while (i < 4/*condição de parada*/) {
		printf("Olá, mundo!\n");
		// i = i + 1;
		i++/*incremento do acumulador*/;
	}
	printf("E mais outra estrutura de repetição:\n");
	// for = para
	// for (acumulador; condição de parada; incremento) {
	int j;
	for (j = 0; j < 3; j++) {
		printf("%d - Olá, doido! ", j);
	}
	return 0;
}
