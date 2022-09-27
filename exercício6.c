#include <stdio.h>
#include <math.h>

/*
Faca um programa que calcule o MDC - Maximo Divisor Comum e MMC - Minimo
Multiplo Comum de dois numeros informados pelo usuario.
*/

int mdc(A, B) {
	int resto;		
	while(B != 0) {
		resto = A % B;
		A = B;
		B = resto;
	}
	return A;
}

int mmc(A, B) {
	return A * (B / mdc(A, B));
}

int main(){
	int A, B;
	printf("Digite dois valores:\n");
	scanf("%d %d", &A, &B);

	printf("O MDC eh: %d\n", mdc(A, B));
	printf("O MMC eh: %d", mmc(A, B));
	
	return 0;	
}
//Matheus Ramos Esteves; turma ID
