#include <stdio.h>
#include <math.h>

/*
Escrever um algoritmo que le um valor n inteiro e positivo e que calcula e escreve o
valor de K. Considere:
*/


int main(){

int fat, n;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &n);
for(fat = 1; n > 1; n = n - 1)
fat = fat * n;
printf("\nFatorial calculado: %d", fat);
}
//Matheus Ramos Esteves; Turma ID
