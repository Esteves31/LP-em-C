#include <stdio.h>

/*
Programa que imprime se um dado numero eh par ou impar, sem o uso de if e else.
*/
 
 int main () {
 	int num;
 	char par, impar;
 	printf("Digite um nuero: ");
 	scanf("%d", &num);
 	par = num%2 == 0;
 	impar = num%2 == 1;
 	printf("%d eh %c", num, par, impar);
 	return 0;
 }
