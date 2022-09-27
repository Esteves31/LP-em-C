#include <stdio.h>
#include <string.h>
#include <math.h>

/*
Uma empresa concedera um aumento de salario aos seus funcionarios, variavel
de acordo com o cargo:
Gerente=10% Engenheiro=20% Auxiliar=30%
Faca um programa que leia o salario e o cargo de um funcionario e calcule o
novo salario. Se o cargo do funcionario nao estiver na tabela, ele devera entao
receber 40% de aumento. Mostre o salario antigo, o novo salario e a diferenaa.
*/

int main () {
	float s, ns, dif;
	char cargo[100];
	char i;
	
	printf("Seu salario atual:\n");
		scanf("%f", &s);
	
	printf("Voce eh gerente, engenheiro, auxiliar ou outro?:\n");
		scanf(" %[^\n]", cargo);
		
	if (cargo[i] == 'g') {
		ns = s + (s*0.1);
	}
	else if (cargo[i] == 'e'){
		ns = s + (s*0.2);
	}
	else if (cargo[i] == 'a'){
		ns = s + (s*0.3);
	}
	else {
		ns = s + (s*0.4); 
	}
		
	dif = ns - s;
		
	printf("Seu salario antigo era de: %.2f\n", s);
	printf("Seu salario novo sera de: %.2f\n", ns);
	printf("diferenca salarial de: %.2f\n", dif);
	
return 0;
}

//Matheus Ramos Esteves; Turma ID
