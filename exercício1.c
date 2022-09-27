#include <stdio.h>

//Programa para calcular o consumo medio de combustivel

int main (){
	float tanque, oil, consumo;
	
	printf("Quantos KM voce andou?:\n");
		scanf("%f", &oil);
	printf("Quantos litros de gasolina gastou?:\n");
		scanf("%f", &tanque);
	
	consumo = oil/tanque;
	
	printf("Seu consumo de combutivel foi de: %.2f", consumo);
	
	return 0;
}

// Matheus Ramos Esteves; Turma: ID
