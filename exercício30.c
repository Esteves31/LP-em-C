#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*
Programa que calcula o peso ideal.  
*/

int main () {
	char s;
	printf("Informe seu sexo, M ou F: ");
	scanf("%c", &s);
	
	float A, peso;
	printf("Digite sua altura, em metros: ");
	scanf("%f", &A);
	
	switch (s) {
		case 'M':
			peso = ((A*72.7) - 58);
			break;
		case 'F':
			peso = ((A*62.1) - 44.7);
			break;
		default:
			peso = -1;
	}

	printf("Seu peso ideal eh: %f", peso);
	return 0;
	
}
