#include <stdio.h>

/*
Programa que imprime o codigo ASCII de uma vogal dada pelo teclado. Considere
apenas A, E, I, O e U. Use operadores ternarios para a comparacao.
*/

int main (){
	printf("Escolha uma vogal: ");
	char caractere = 0;
	scanf("%c", &caractere);
	int codigo = 0;
	
	codigo = (caractere=='A') ? 65:
			 (caractere=='E') ? 69:
			 (caractere=='I') ? 73:
			 (caractere=='O') ? 79:
			 (caractere=='U') ? 85: -1;
	printf("O codigo asc da vogal eh: %d", codigo);
	return 0;
}
