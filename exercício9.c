#include <stdio.h>
#include <math.h>

/*
Programa que soma de todos os n�meros �mpares que s�o m�ltiplos de 3 e que se
encontram no intervalo de dois n�meros dados pelo usu�rio.
*/

int main() {
	int A,B,x,q=0;
	
 	printf("Digite o intervalo:\n");
		scanf("%d %d",&A, &B);
		  
 	for(x=A;x<=B;x++){
   	if((x%2!=0)&&(x%3==0)){
      q = q + x;
    }
  }
  printf("S=%d \n",q);
  return 0;
}
//Matheus Ramos Esteves; Turma ID
