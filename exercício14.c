#include <stdio.h>
#include <string.h>

/*
Faca um programa usando vetores que leia o nome de 5 pessoas e mostre os
nomes armazenados.
*/

int main() {
	char n1[100];
	char n2[100];
	char n3[100];
	char n4[100];
	char n5[100];
	
	printf("Digite o primeiro nome:\n");
		scanf(" %[^\n]", n1);
	printf("Digite o segundo nome:\n");
		scanf(" %[^\n]", n2);
	printf("Digite o terceiro nome:\n");
		scanf(" %[^\n]", n3);
	printf("Digite o quarto nome:\n");
		scanf(" %[^\n]", n4);
	printf("Digite o quinto nome:\n");
		scanf(" %[^\n]", n5);
		
	printf("Os nomes armazenados sao: %s, %s, %s, %s e %s.", n1, n2, n3, n4, n5);
return 0;
}

//Matheus Ramos Esteves; Turma ID
