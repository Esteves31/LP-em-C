#include <stdio.h>
#include <math.h>

/*
Programa que calcula o IMC - indice de Massa Corporal. 
*/

int main() {
    float m, a, imc;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &m);
    printf("Digite sua altura (em metros): ");
	scanf("%f", &a);		
	
    imc = (m/(a*a));

    if(imc < 18.5){
        printf("IMC: %f\tAbaixo do peso\n", imc);
    } else if(imc >= 18.5 && imc < 25){
        printf("IMC: %f\tPeso normal\n", imc);
    } else if(imc >= 25 && imc < 30){
        printf("IMC: %f\tSobrepeso\n", imc);
    } else if(imc >= 30 && imc < 35){
        printf("IMC: %f\tObesidade grau 1\n", imc);
    } else if(imc >= 35 && imc < 40){
        printf("IMC: %f\tObesidade grau 2\n", imc);
    } else{
        printf("IMC: %f\tObesidade grau 3\n", imc);
}
}
