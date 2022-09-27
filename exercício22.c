#include <stdio.h>
#include <string.h>

/* Escreva um programa que leia um arquivo texto e duas strings e um nome para um arquivo a ser criado
Todos os parametros devem ser passados como argumentos da funcao main(int argc, char *argv[])
O programa deve retornar uma mensagem ao usuario quando o numero de parametros for incompativel com o problema (arquivoIn, string1, string2 e arquivoOut)
Uma funcao deve buscar por ocorrencias da string1 no arquivoIn, substitui-la pela string2 durante a geracao do arquivoOut
*/

int main(int argc, char *argv[]) {
  FILE *arqIn, *arqOut;
  char string[30], l;
  int i=0;

  arqIn = fopen(argv[1], "r"); 
  arqOut = fopen(argv[4], "w");

 if (argc != 5) {
      printf("Numero de parametros esta incorreto");
      return 1;
 }
 else if (arqIn == NULL) {
       printf("Arquivo n�o foi criado!");
       return 2;
 }
 else if(arqOut == NULL) {
       printf("Erro de cria��o no arquivo!");
       return 3;
}
 else{
 l= getc(arqIn);
 while (l != EOF) {
   string[i]=l;
   i++;
   l = getc(arqIn);
 }

 if (strcmp(string, argv[2]) == 0) {
   argv[3] = string;
 }

 fclose(arqIn);
 fprintf(arqOut, "%s\n", argv[2]);
 fprintf(arqOut, "%s", argv[3]);
 fclose(arqOut);

return 0;
}
}

//Matheus Ramos Esteves; Turma ID
