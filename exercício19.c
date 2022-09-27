#include <stdio.h>
#include <string.h>

/*
Faca um programa que leia um string e faca com que a primeira letra de cada
palavra fique em maiuscula. Para isso, basta subtrair 32 do elemento que deseja
alterar para maiusculo
chrNome[0] = chrNome[0] � 32;
Ex. Entrada: lab. de linguagem de programacao Ex. Saida : Lab. De Linguagem
De Programacao
*/

int main() {
	char string[100];   
	int i;   
	 
	printf("Digite uma frase:\n ");  
		scanf(" %[^\n]", string);   
		 
	if (string[0] != ' ') {        
		string[0] = string[0] - 32;     
	}      
	for (i=1; string[i]!='\0'; i++) {   
		if (string[i-1] == ' ' && string[i] != ' ') {
			string[i] = string[i] - 32;      
	     }   
	    }   
		 
	printf ("A frase modificada eh:\n");    
	puts (string);      
return 0;
}
//Matheus Ramos Esteves; Turma ID
