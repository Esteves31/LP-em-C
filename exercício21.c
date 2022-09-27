#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma funcao que receba um numero inteiro que representa um intervalo de tempo medido em minutos e
devolva o correspondente numero de horas e minutos (por exemplo, converte 131 minutos em 2 horas e 11
minutos).
Use um registro como o seguinte:
	struct hm {
		int horas;		
		int minutos;
	};
*/

typedef struct hm {
    int horas;
    int minutos;
    float min;
}m;
m tempo;
m converter(int min) {
    tempo.horas = min / 60;
    tempo.minutos = (int)min % 60;
return tempo;
}

int main() {
    int min;
    printf("Insira um intervalo de minutos: ");
   	 scanf("%d", &min);
    converter(min);
    printf("A conversao eh: %d horas e %d minuntos\n\n", tempo.horas, tempo.minutos);
return 0;
}

//Matheus Ramos Esteves; Turma ID
