#include <stdio.h>
#include <locale.h>
int main() {
	float tempo, Vm, deltaS, litros;
	setlocale(LC_ALL,"");
	//printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));
	printf("Motorista, informe o tempo gasto na viagem:\n");
	scanf("%f", &tempo);
	printf("Motorista, informe a Velocidade média durante a viagem:\n");
	scanf("%f", &Vm);
	
	deltaS = tempo * Vm;
	
	litros = deltaS / 12;
	
	// exibir Vm, tempo, distancia e consumo
	printf("=== RESUMO DA VIAGEM ===\n");
	printf("Velocidade media: %f Km/h\n", Vm);
	printf("Tempo gasto: %f h\n", tempo);
	printf("Distancia percorrida: %f Km\n", deltaS);
	printf("Consumo de combustivel: %f L\n", litros);
	
	return 0;
}
