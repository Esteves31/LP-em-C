#include <stdio.h>

/*
Fazer um programa usando uma funcao recursiva para resolver o problema da Torre de
Hanoi usando N discos. N devera ser informado pelo usuario. O programa devera informar
os passos necessarios para resolucao do problema.
*/

void hanoi(int n, char origem, char destino, char auxiliar) {
	if(n==1) { 
		printf("\nMova o disco 1 da base %c para a base %c", origem , destino);
		return;
	}

	hanoi(n-1, origem, auxiliar, destino);
	
	printf("\nMova o disco %d da base %c para a base %c", n, origem, destino);
	 
	hanoi(n-1, auxiliar, destino, origem);
}

main(){
	int n;
		printf("Digite o numero de discos : ");
			scanf("%d",&n);
		printf("Para resolver a torre de Hanois fa�a :\n\n");
		hanoi(n, 'A', 'C', 'B');
		printf("\n");
	return 0;
}

//Matheus Ramos Esteves; Turma ID
