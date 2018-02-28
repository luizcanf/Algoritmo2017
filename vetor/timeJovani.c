#include<stdio.h>

int main() {
	int n, k = 3;
	printf("Digite quantos alunos tem na sala: ");
	scanf("%d",&n);

	float nota_p1[n], nota_p2[n], nota_p3[n], notas_bim[n];
  float peso_p1, peso_p2, peso_p3, media_turma, somatorio = 0;
  nota_p1[0];
	printf("Peso p1:");
	scanf("%f",&peso_p1);
	printf("Peso p2:");
	scanf("%f",&peso_p2);
	printf("Peso p3:");
	scanf("%f",&peso_p3);

	int i = 1;
	while(i<=n){
    printf("Digite as notas do aluno %d:\n", i);
	  printf("Nota da p1:");
	  scanf("%f", &nota_p1[i]);
	  printf("Nota da p2:");
    scanf("%f", &nota_p2[i]);
	  printf("Nota da p3:");
    scanf("%f", &nota_p3[i]);
  	notas_bim[i] = ((nota_p1[i]*peso_p1)+(nota_p2[i]*peso_p2)+(nota_p3[i]*peso_p3))/(peso_p1+peso_p2+peso_p3);
    somatorio = somatorio + notas_bim[i];
    printf("A nota do aluno %d no bimestre foi %g\n", i, notas_bim[i]);
    i++;
	}

  media_turma = somatorio / n;
  printf("\nA nota média da turma neste bimestre foi: %g\n", media_turma);
	return 0;
}
