#include <stdio.h>

/*
Programa que le um numero inteiro e imprime seu sucessor e seu antecessor
*/
 
 int main () {
 	int num, antes, depois;
 	printf("digite um numero:");
 		scanf("%d", &num);
 	antes = num - 1;
 	depois = num + 1;
 	printf("Seu sucessor eh: %d\n", depois);
 	printf("Seu antecessor eh: %d\n", antes);
 	return 0;
 }
