#include <stdio.h>
#include <locale.h>

int main() {
	// repitindo c�digo, estilo ctrl+c, ctrl+v
	printf("Ol�, galera!\n");
	setlocale(LC_ALL, "");
	printf("Ol�, galera!\n");
	// muito eficiente quando s� precisa repetir 2x...
	// entretanto, se eu pedir para escrever algo 100x? 	int i = 0;
	/* tem q existir um jeito menos idiota de fazer,
	sem ser copiar e colar isso v�rias vezes...
	inclusive por que, se eu precisar mudar o c�digo,
	vou ter um trabalh�o todo de novo...*/
	int /*variavel de acumula��o*/i = 0;
	printf("Agora, vamos usar estruturas de repeti��o:\n");
	//while = enquanto
	while (i < 4/*condi��o de parada*/) {
		printf("Ol�, mundo!\n");
		// i = i + 1;
		i++/*incremento do acumulador*/;
	}
	printf("E mais outra estrutura de repeti��o:\n");
	// for = para
	// for (acumulador; condi��o de parada; incremento) {
	int j;
	for (j = 0; j < 3; j++) {
		printf("%d - Ol�, doido! ", j);
	}
	return 0;
}
