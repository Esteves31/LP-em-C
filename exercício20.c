#include <stdio.h>
#include <stdlib.h>
void inverte(int t, int *v);

/*
Dado um vetor de tamanho t, faca uma
funcao que inverta os valores do mesmo

void inverte(int *v, int t)
*/

int main() {
	int t;
	int *v;
	
	printf("Insira o tamanho do vetor:\n");
	scanf("%d", &t);
	
	v = (int*)calloc(t,sizeof(int));
	printf("\n\n*Vetor Invertido*\n");
	
	inverte(t, v);


return 0;	
}

void inverte(int t, int *v) {
	int i;
	i = t-1;
	while(i>=0){
	printf("vetor[%d] = %d\n", i, v[i]);
	i--;
	v[i]++;
 } 
}

//Matheus Ramos Esteves; Turma ID
