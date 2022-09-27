#include <stdio.h>

/*
Programa que imprime a media aritmetica de dois grupos com 3 notas em cada.
Calcule tambem a media das medias dos grupos. As notas devem ser informadas via
teclado.
*/

int main () {

	float nota9, nota8, nota3, media1, nota4, nota5, nota6, media2, media3;
	printf("Notas do grupo 1.\n");
		printf("Digite a nota 1: ");
			scanf("%f",&nota9);
		printf("Digite a nota 2: ");
			scanf("%f",&nota8);
		printf("Digite a nota 3: ");
			scanf("%f",&nota3);
		media1 = (nota9+nota8+nota3)/3;
		printf("A media do grupo 1 e: %f", media1);
	printf("\n-----------------------------------------\n");
	printf("Notas do grupo 2.\n");
		printf("Digite a nota 1: ");
			scanf("%f",&nota4);
		printf("Digite a nota 2: ");
			scanf("%f",&nota5);
		printf("Digite a nota 3: ");
			scanf("%f",&nota6);
		media2 = (nota4+nota5+nota6)/3;
		printf("A media do grupo 2 e: %f", media2);
	printf("\n-----------------------------------------\n");
		media3 = (media1+media2)/2;
	printf("A media geral eh: %f", media3);
	
return 0;
}
