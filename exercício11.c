#include <stdio.h>
#include <math.h>

/*
Escreva um algoritmo que leia duas matrizes reais de dimens�o 3 x 4, calcule e
imprima a soma das matrizes.
*/

int main() {

    int i, j;
	int mat1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int mat2[3][4] = {15,16,17,18,19,20,21,22,23,24,25,26};
	int mat3[3][4];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++)
            printf("%d ", mat3[i][j]);
        printf("\n");
    }
return 0;
}

//Matheus Ramos Esteves; Turma ID
