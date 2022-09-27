#include <stdio.h>

/*
Escreva uma funcao que receba dois registros do tipo data, cada um representando uma data valida, e devolva o
numero de dias que decorreram entre as duas datas.
*/

typedef struct data {
	int dia;
} x, y;

x diasx;
x conversor1(int ano1, int mes1, int dia1) {
	 diasx.dia = ano1*365 - dia1 - mes1*30;
return diasx;
}

y diasy;
y conversor(int ano2, int mes2, int dia2) {
	diasy.dia = ano2*365 - dia2 - mes2*30;
return diasy;
}

int main() {
	int dia1, mes1, ano1;
	
	printf("Escolha uma data\n");
	printf("ano: ");
	scanf("%d", &ano1);
	printf("mes: ");
	scanf("%d", &mes1);
		if (mes1 < 1 || mes1 > 12) {
			printf("Mes invalido");
} 	
		else { 
		printf("dia: ");
		scanf("%d", &dia1);
			if(dia1 < 1 || dia1 > 31){
				printf("Dia inv�lido");
	}		else if (mes1 == 2) {
			if((ano1 % 4 == 0) && (ano1 % 100 != 0) || (ano1 % 400 == 0)){
				if(dia1 <1 || dia1 > 29){
					printf("Dia inv�lido");
				}
		}		else if(dia1 < 1 || dia1 > 28){
					printf("Dia inv�lido");
	}	
	}		else if( mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11) { 	
				if (dia1 < 1 || dia1 > 30) {
					printf("Dia inv�lido");
				}
} 

} 
	int dia2, mes2, ano2;
	
	printf("Escolha outra data\n");
	printf("ano: ");
	scanf("%d", &ano2);
	printf("mes: ");
	scanf("%d", &mes2);
		if (mes2 < 1 || mes2 > 12) {
			printf("Mes invalido");
} 	
		else { 
		printf("dia: ");
		scanf("%d", &dia2);
			if(dia2 < 1 || dia2 > 31){
				printf("Dia inv�lido");
	}		else if (mes2 == 2) {
			if((ano2 % 4 == 0) && (ano2 % 100 != 0) || (ano2 % 400 == 0)){
				if(dia2 <1 || dia2 > 29){
					printf("Dia inv�lido");
				}
		}		else if(dia2 < 1 || dia2 > 28){
					printf("Dia inv�lido");
	}	
	}		else if( mes2 == 4 || mes2 == 6 || mes2 == 9 || mes2 == 11) { 	
				if (dia2 < 1 || dia2 > 30) {
					printf("Dia inv�lido");
				}
} 
} 
	conversor1(ano1, mes1, dia1);
	conversor(ano2, mes2, dia2);
	
	float decorrente;
	decorrente = diasx.dia - diasy.dia;
	
	printf("\nOs dias decorrentes sao: %f", decorrente);
	
return 0;
} 

//Matheus Ramos Esteves; Turma ID
