#include <stdio.h>
#include <math.h>

/*
Escreva um programa que receba duas matrizes A e B e retorne C = A * B.
*/

int main(int argc, char *argv[]) {
	
  int i, coluna, somaprod, linha;
  int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int mat2[3][3]={{11,12,13},{14,15,16},{17,18,19}};
  int mat3[3][3];
  int M1L=3, M1C=3, M2L=3, M2C=3;
  
  for(linha=0; linha<M1L; linha++)
    for(coluna=0; coluna<M2C; coluna++){
      somaprod=0;
      for(i=0; i<M1L; i++) somaprod+=mat1[linha][i]*mat2[i][coluna];
      mat3[linha][coluna]=somaprod;
    }
 
  for(linha=0; linha<M1L; linha++){
    for(coluna=0; coluna<M2C; coluna++)
      printf("%d ", mat3[linha][coluna]);
    printf("\n");
  }    
return 0;
}

//Matheus Ramos Esteves; Turma ID
