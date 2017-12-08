#include<stdio.h>

int main() {
// dois n�meros reais digitados pelo usu�rio.*/
  float a, b;
  printf("Faz favor de digitar dois floatzes bonzinhossss aí, precioso:\n");
  scanf("%f %f", &a, &b);
//Crie um algoritmo que soma, divide, multiplica e subtrai*/
//Depois mostre o resultado de cada uma dessas opera��es de modo simples,
// destacando qual foi a opera��o realizada.*/
  printf("Soma:\n %g + %g = %g\n", a, b, a+b);
  printf("Subtração:\n %g - %g = %g\n", a, b, a-b);
  printf("Multiplicação:\n %g x %g = %g\n", a, b, a*b);
  if (b!=0) {
    printf("Divisão:\n %g / %g = %g\n", a, b, a/b);
  } else {
    printf("Não farei divisão por zero.\n");
  }
  return 0;
}
