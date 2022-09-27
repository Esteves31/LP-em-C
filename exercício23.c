#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*Matheus Ramos Esteves;
R.A: 156.732; 
Atv: programa que controle o cadastro de veiculos em uma determinada concessionaria.
*/

  struct registro {			//Struct para os registros
 	int ano;
  	int km;
  	int porta;
  	char marca[15]; 
  	char mod[25]; 
  	char placa[6];
	char ar;
};

void registro();			//fu��o para criar os registros
void listagem();			//fun��o para testar se foram criados
int pesquisa();				//fun��o para pesquisar por placa
void deleta();				//fun��o para deletar infos da placa
void altera();				//fun��o para alterar as infos da placa

int main() {
  int x;
  do{
  printf("\n------MENU------\n");           //menu do programa
  printf("1) Inserir novo cadastro de veiculo\n2) Alterar cadastro\n3) Mostrar os dados de um veiculo\n4) Apagar registro\n5) Sair\n");
  printf("\nOpcao desejada: ");				//escolher a op��o desejada
    scanf("%d", &x);
  
  switch(x){								//m�todo para escolher as fun��es
    case 1:
    	registro();
    break;

    case 2:
    	altera();
    break;

    case 3:
    	pesquisa();
    break;

    case 4:
    	deleta();
    break;

    case 5:
		printf("Ate a proxima!\n");
		getch();
    break;

    default:
      	printf("Escolha uma opcao de 1 a 5\n");
      	getch();
    break;
  }
  } while (x != 5);											//programa s� encerra se digitar 5 no menu
}

void registro(){									        //fun��o para fazer os registros
   FILE *fy;
   struct registro registros, *c;
   
   
   fy = fopen ("carros.txt", "a+");						    //criando o arquivo 
   
	if (fy == NULL) {									    //verifica se arquivo foi criado
      printf("Erro na criacao do arquivo!");
    }   
    
    else {
      c = (struct registro *) malloc (sizeof(registros));   //alocando espa�o para os registros
      
   	  printf("Marca do carro: "); 					    	//fazendo registro dos carros
        scanf("%s", registros.marca);
          
      printf("Modelo do carro: ");
         scanf("%s", registros.mod);
         
      printf("Ano de fabricacao: ");
         scanf("%d", &registros.ano);
         
      printf("Placa do carro: ");
         scanf("%s", registros.placa);
        
      printf("Quilometragem: ");
         scanf("%d", &registros.km);
         
      printf("Numero de portas: ");
         scanf("%d", &registros.porta);
         
      printf("Ar-condicionado: ");
    	 scanf(" %c", &registros.ar);
    	 
    fprintf (fy, "%s\n", registros.marca); 			//colocando os registros no arquivo
    fprintf (fy, "%s\n", registros.mod);
    fprintf (fy, "%d\n", registros.ano);
    fprintf (fy, "%s\n", registros.placa);
    fprintf (fy, "%d\n", registros.km);
    fprintf (fy, "%d\n", registros.porta);
    fprintf (fy, "%c\n", registros.ar);
    
    fclose(fy);										//fechando arquivo
    free(c);										//liberando o espa�o
    getch();
  }
}

void listagem(){											 //fun��o para testar se foram criados							
   FILE *fy;
   struct registro registros;
   
   fy = fopen ("carros.txt", "r");							 //abrindo o arquivo para leitura
   
	if (fy == NULL) {										 //verifica se arquivo existe
      printf("Erro na criacao do arquivo!");
    }   
    else { 													//ler todo o arquivo	
    	while(fscanf(fy, "%s %s %d %s %d %d %c", registros.marca, registros.mod, &registros.ano, registros.placa, &registros.km, &registros.porta, &registros.ar)!=EOF ){
			printf("-------------------------------------------\n");
    		printf("Marca: %s\n", registros.marca);			//printa todos os registros
    		printf("Modelo: %s\n", registros.mod);
    		printf("Ano: %d\n", registros.ano);
    		printf("Placa: %s\n", registros.placa);
    		printf("Quilometragem: %d\n", registros.km);
    		printf("Portas: %d\n", registros.porta);
    		printf("Ar-condicionado: %c\n", registros.ar);
    		printf("-------------------------------------------\n\n");
		}	
	}
	fclose(fy);													 //fecha o arquivo
	getch();
}

int pesquisa(){											//fun��o para pesquisar pela placa
	FILE *fy;
	struct registro registros;
	char placas[6];
	int pos = 0;
	
	fy = fopen("carros.txt", "r");								//abrindo arquivo para leitura
	
	if (fy == NULL) {
      printf("Erro na criacao do arquivo!");	
	}
	else {														 //inserir a placa 
		printf("Digite a placa: ");
			scanf(" %s", placas);
																//ler todo o arquivo
		while(fscanf(fy, "%s %s %d %s %d %d %c", registros.marca, registros.mod, &registros.ano, registros.placa, &registros.km, &registros.porta, &registros.ar)!=EOF ){    
			if(strcmp(placas, registros.placa)==0 ){			 //comparar a placa digitada com uma registrada
			printf("-------------------------------------------\n");	
			printf("INFORMACOES DO CARRO: \n");
			printf("Marca: %s\n", registros.marca);				 //printar as informa��es da placa 
    		printf("Modelo: %s\n", registros.mod);
    		printf("Ano: %d\n", registros.ano);
    		printf("Placa: %s\n", registros.placa);
    		printf("Quilometragem: %d\n", registros.km);
    		printf("Portas: %d\n", registros.porta);
    		printf("Ar-condicionado: %c\n", registros.ar);
    		printf("-------------------------------------------\n\n");	
    		return pos;
			}
			pos++;
		}
	}
	fclose(fy);													 //fecha o arquivo
	getch();
	return -1;
}

void deleta(){												 // fun��o para deletar as infos da placa
  struct registro vetor[100], *c;
  int pos = 0;
  FILE *fy;
  
c = (struct registro *)malloc(sizeof(vetor));				 //aloca espa�o
  fy = fopen("carros.txt", "r");                             //abrindo arquivo para leitura

  while(fscanf(fy, "%s %s %d %s %d %d %c", vetor[pos].marca, vetor[pos].mod, &vetor[pos].ano, vetor[pos].placa, &vetor[pos].km, &vetor[pos].porta, &vetor[pos].ar)!=EOF ){
    pos++;													 
  }

  fclose(fy);

  int pos_deleta = pesquisa(), i;

  if(pos==-1){
    printf("Placa n�o  encontrada");
    return;
  }
  else{
    fy = fopen("carros.txt", "w"); 
    
    for(i = 0; i < pos; i++){

      if(i != pos_deleta){
        
        fprintf(fy, "\n %s\n", vetor[i].marca);            //printa todos os registros,
        fprintf(fy, "%s\n", vetor[i].mod);				   //menos o apagado, em um novo  
        fprintf(fy, "%d\n",  vetor[i].ano);					 
        fprintf(fy, "%s\n", vetor[i].placa);
    	fprintf(fy, "%d\n", vetor[i].km);
    	fprintf(fy, "%d\n", vetor[i].porta);
    	fprintf(fy, "%c\n", vetor[i].ar);   
      }
    }
    fclose(fy);
    free(c);
  }
}

void altera(){													//fun��o para alterar dados
  struct registro vetor[100], *c;
  int pos = 0, x;
  FILE *fy;
  
  c = (struct registro *)malloc(sizeof(vetor));				 //aloca espa�o
  fy = fopen("carros.txt", "r");                             //abrindo arquivo para leitura

  while(fscanf(fy, "%s %s %d %s %d %d %c", vetor[pos].marca, vetor[pos].mod, &vetor[pos].ano, vetor[pos].placa, &vetor[pos].km, &vetor[pos].porta, &vetor[pos].ar)!=EOF ){
    pos++;													 
  }
  fclose(fy);

  int pos_altera = pesquisa(), i;

  if(pos==-1){
    printf("Placa n�o  encontrada");
    return;
  }
  else{
  	fy = fopen ("carros.txt", "w");
  	
  		do{
		printf("1- Marca\n2- Modelo\n3- Ano de fabricacao\n 4- Quilometragem\n 5- Portas\n6- Ar-condicionado\n7- Fim da alteracao\n");
		printf("Opcao que deseja alterar: ");
		scanf("%d", &x);
		
		switch(x){
			case 1:
				printf("Alterar marca para: ");
				scanf("%s", vetor[pos_altera].marca);
				fscanf(fy, "%s", vetor[pos_altera].marca);
			break;
			
			case 2:
				printf("Alterar modelo para: ");
				scanf("%s", vetor[pos_altera].mod);
				fscanf(fy, "%s", vetor[pos_altera].mod);
			break;
			
			case 3:
				printf("Alterar ano para: ");
				scanf("%d", &vetor[pos_altera].ano);
				fscanf(fy, "%d", &vetor[pos_altera].ano);
			break;
			
			case 4:
				printf("Alterar quilometragem para: ");
				scanf("%d", &vetor[pos_altera].km);
				fscanf(fy, "%d", &vetor[pos_altera].km);
			break;
			
			case 5:
				printf("Alterar portas para: ");
				scanf("%d", &vetor[pos_altera].porta);
				fscanf(fy, "%d", &vetor[pos_altera].porta);
			break;
			
			case 6:
				printf("Alterar ar para: ");
				scanf("%c", &vetor[pos_altera].ar);
				fscanf(fy, "%c", &vetor[pos_altera].ar);
			break;
			
			case 7:
				printf("Saindo das alteracoes");
			break;
			
			default:
				printf("Escolha de 1 a 8");
			break;
			fclose(fy);
		}
		fy = fopen ("carros.txt", "w");
		for(i = 0; i < pos; i++){
        
        fprintf(fy, "\n %s\n", vetor[i].marca);            //printa todos os registros,
        fprintf(fy, "%s\n", vetor[i].mod);				   //menos o apagado, em um novo  
        fprintf(fy, "%d\n",  vetor[i].ano);					 
        fprintf(fy, "%s\n", vetor[i].placa);
    	fprintf(fy, "%d\n", vetor[i].km);
    	fprintf(fy, "%d\n", vetor[i].porta);
    	fprintf(fy, "%c\n", vetor[i].ar);   
   		} 
	}while (x != 7);
  	fclose(fy);
  	free(c);
  }
}

