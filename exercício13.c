#include <stdio.h>
#include <string.h>

/*
Escreva um programa que leia um string, conte quantos caracteres desta string sao iguais a letra a e substitua os que forem iguais a a pela letra b. 
O programa deve imprimir o numero de caracteres modificados e o string modificado
*/

int main () {
	char string[100];
	int count = 0, i = 0;
	
	printf("Digite uma string:\n");
 		scanf(" %[^\n]",string);
 	 
 	do{
    	if(string[i]=='a'){
     	 string[i] = 'b';
      	 count++;
    }
  } while(string[++i]!='\0');
  
  printf("Num modificado = %d (%s)",count, string);
  return 0;
}

// Matheus Ramos Esteves; Turma ID
