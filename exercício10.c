#include <stdio.h>
#include <math.h>

/*
Dados dois vetores v1 e v2, ambos com 5 elementos, determinar o produto escalar
destes vetores. v1 . v2 = v11v21 + v12v22 + v13v23 + v14v24 + v15v25
*/

int main() {
	
	float v1[5];
	float v2[5];
	float prod;
	
	printf("Digite os 5 numeros do vetor 1: \n");
		scanf("%f %f %f %f %f", &v1[0], &v1[1], &v1[2], &v1[3], &v1[4]);
	
	printf("Digite os 5 numeros do vetor 2: \n");
		scanf("%f %f %f %f %f", &v2[0], &v2[1], &v2[2], &v2[3], &v2[4]);
	
	prod = (v1[0] * v2[0]) + (v1[1] * v2[1]) + (v1[2] * v2[2]) + (v1[3] * v2[3]) + (v1[4] * v2[4]);
	
	printf("O produto escalar eh: %.2f", prod);
	
	return 0;	
}

//Matheus Ramos Esteves; Turma ID
