#include <stdio.h>
#include <math.h>

/*
Faca um programa que imprima todos os numeros quadrados perfeitos de um
intervalo informado pelo usuario. Numeros quadrados perfeitos sao numeros cuja
raiz quadrada resultam em um valor inteiro.
*/

int main() {
	int r, A, B, x;
  	printf("Digite o intervalo desejado:\n");
	  scanf("%d %d", &A, &B);
	  
    for(r=A; r<=B; r++){
    	x = sqrt(r);
    
    if(pow(x,2) == r)
      printf("%d ", r);
	}
	
	return 0;
	
}
//Matheus Ramos Esteves; turma ID
