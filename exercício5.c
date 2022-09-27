#include <stdio.h>
#include <math.h>

/*Programa para classificar um triangulo. Informe os tamanhos dos segmentos e
classifique de acordo com equilatero, isosceles e escaleno.
*/

int main(){
	
	float a, b , c;
	
	printf("Tamanho do lado a:\n");
		scanf("%f", &a);
	printf("Tamanho do lado b:\n");
		scanf("%f", &b);
	printf("Tamanho do lado c:\n");
		scanf("%f", &c);
		
	if(a == b == c){
		printf("Triangulo equilatero");
	} 
	else if (a == b && a != c || a == c && a != b || b == c && b != a || c == b && c != a ){
		printf("Triangulo isosceles");	
	} 
	else {
		printf("Triangulo escaleno");
	}	
		
	return 0;
}

//Matheus Ramos Esteves; Turma ID
