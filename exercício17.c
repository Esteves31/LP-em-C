#include <stdio.h>
#include <string.h>


/*
Faca um programa que receba 2 strings (A e B) e retorne um terceiro string (C)
formado pelos caracteres de A e B intercalados. Ex.: Se A= Quarta  e
B= Segunda , a resposta deve ser  QSueagrutnada .
*/

int main () {
	char s1[30], s2[30], s3[60];
    int i=0,j=0, k=0, tamanho=0;

    printf("String 1: ");
      scanf(" %s", s1);

    printf("String 2: ");
      scanf(" %s", s2);

    tamanho = strlen(s1) + strlen(s2);

    for(i=0; i < tamanho; i++){
        if(i%2 == 0){
          s3[i] = s1[j];
          j++;
        }else {
         s3[i] = s2[k];
          k++;
     }
    }
    printf(" %s", s3);

return 0;
}

//Matheus Ramos Esteves; Turma ID
