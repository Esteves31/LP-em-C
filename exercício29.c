#include <stdio.h>
#include <math.h>
/*
Programa que calcula juros compostos. 
*/

int main () {
	float m, c, i, t, j;
	printf("Valor do capital: ");
		scanf("%f", &c);
	printf("Valor da taxa de juros, ao mes: ");
		scanf("%f", &i);
	printf("Quantidade de tempo, em meses: \n");
		scanf("%f", &t);
	m = c*pow((1+i),t);
	printf("O montante é de: %f", m);
	printf("\n----------------------------\n");
	j = m - c;
	printf("O juros foi de: %f", j);
	return 0;
}
