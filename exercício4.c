#include <stdio.h>
#include <math.h>

/*Faca um programa que calcule a area de um trapezio ou o volume de uma piramide.
O usuario devera escolher a opcao e informar os valores necessarios.
*/

int main (){
	int i;
	float h, b, B, At, Ap;
	
	printf("informe se quer a area do trapezio(1) ou piramide(2):\n");
		scanf("%d", &i);
	printf("informe a altura:\n");
		scanf("%f", &h);
	printf("informe o tamanho de uma base:\n");
		scanf("%f,", &b);
	printf("informe o tamanho da outra base:\n");
		scanf("%f,", &B);
		
	At = ((B+b)*h)/2;
	Ap = (b*B*h)/3;
		
	if(i == 1){
			printf("A area do trapezio eh: %.2f", At);
			
	} else {
			printf("A area da piramide eh: %.2f", Ap);
			
	}
	
	return 0;	
}

// Matheus Ramos Esteves; Turma: ID
