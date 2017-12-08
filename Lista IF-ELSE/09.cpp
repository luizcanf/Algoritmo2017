#include <stdio.h>

int main() {
	//ler o salario minimo, o salario da pessoal
	float minimo, salario, ajuste;
	printf("Digite o salario minimo (em R$): ");
	scanf("%f", &minimo);
	printf("Digite o seu salario atual (em R$): ");
	scanf("%f", &salario);
	// aumento de 5 ou 7%
	if (salario > minimo*2) {
		ajuste = salario*0.05;
	} else {
		ajuste = salario*0.07;
	}
	//mostrar tudo
	printf("Salario minimo: R$ %.2f\n", minimo);
	printf("Salario atual: R$ %.2f\n", salario);
	printf("Aumento: R$ %.2f\n", ajuste);
	printf("Salario reajustado: R$ %.2f\n", salario+ajuste);
	return 0;
}
