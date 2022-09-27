#include <stdio.h>
#include <math.h>

/*Faca um programa que calcule a velocidade v(t) e a altura do lancamento h(t) no
instante t de uma bola arremessada para cima numa velocidade v0, onde a resistencia 
do ar eh desprezada. Considere g=9,81m/s2
*/

int main (){
	float v, h, t, v0, g;
	g=9,81;
	
	printf("Qual o instante que deseja (em segundos)?:\n");
		scanf("%f", &t);
	printf("Qual foi a velocidade do arremesso da bola (em m/s)?:\n");
		scanf("%f", &v0);
	
	v = v0 - g*t;
		printf("A velocidade no instante era de: %.3f\n", v);
	h = (v0*t) - ((g*pow(t,2))/2);
		printf("A altura da bola era de: %.3f\n", h);
	
	return 0;
}

// Matheus Ramos Esteves; Turma: ID
