#include<stdio.h>

int main() {
  /*9. Crie um algoritmo que pergunte a idade da
   pessoa*/
  printf("Olá, pessoa. Qual a sua idade?");
  int idade;
  scanf("%i", &idade);
  /* e exiba uma mensagem dizendo em qual
  faixa etária ela se enquadra:
1. Bebê: de 0 a 2 anos;
2. Criança: de 3 a 11 anos;
3. Adolescente: de 12 a 17 anos;
4. Adulto: de 18 a 64 anos;
5. Idoso: de 65 anos em diante. (15)

se a pessoa tiver entre 0 e 2 anos
eu vou escrever "Gente, um bebê!"
senão, se ela tiver entre 3 e 11 anos
eu vou escrever "Olá, criança!"
senão, se ela tiver entre 12 e 17 anos
escreverei "Falae, aborrescente."
senão, se ela tiver entre 18 e 64 anos
escreverei "Boa tarde, adulto."
senão, se ela tiver 65 ou mais
escreverei "Boa noite, idoso."
senão, escreverei "não existe idade negativa!"*/
if (idade >= 0 && idade <=2) {
  printf("Gente, um bebê!");
} else if (idade >=3 && idade <=11){
  printf("Olá, criança!");
} else if (idade >=12 && idade <=17) {
  printf("Falae, aborrescente.");
} else if (idade >=18 && idade <=64) {
  printf("Boa tarde, adulto.");
} else if (idade >=65) {
  printf("Boa noite, idoso.");
} else {
  printf("não existe idade negativa!");
}

// if (se) é uma estrutura de DECISÃO que utiliza
// 1 parâmetro que é uma variavel ou expressão
// booleana (com valor true ou false)

  return 0;
}
