#include <stdio.h>

/*COVID-19: Programa que estima quantos alunos podem ficar dentro de uma sala de
aula. Para evitar o contato, eh preciso respeitar distancia minima entre as cadeiras,
de 1,0m a 1,5 m. Neste cenario, eh necessario garantir pelo menos 2,25m2 por aluno.
O usuario deve informar a largura e comprimento do local. Considere a area
retangular.
*/

int main (){
	float largura, comprimento;
	int pessoas;
	
	printf("Quantos M a sala tem de largura?:\n");
		scanf("%f", &largura);
	printf("Quantos M a sala tem de comprimento?:\n");
		scanf("%f", &comprimento);
	
	pessoas = (largura*comprimento)/2,25;
	
	printf("A quantidade de pessoas que podem entrar eh: %d", pessoas);
	
	return 0;
}

// Matheus Ramos Esteves; Turma: ID
