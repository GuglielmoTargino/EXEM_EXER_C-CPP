// trecho de programa do livro linguagem C, reescrito para estudo e exerc�cio.
//  aluno: Guglielmo Henriques Targino.
//  data: 15/09/23
//  vers�o: v0.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
	
	char str[80];
	FILE *fp;
	if((fp=fopen("TEST","w+"))==NULL){
		
		printf("o arquivo n�o pode ser aberto.\n");
		exit(1);
	}
	do {
		printf("digite uma string (cr para sair):\n");
		gets(str);
		strcat(str,"\n"); //acrescenta uma nova linha
		fputs(str,fp);
				
	}while (*str!='\n');
	
	
	
	//agora, l� e mostra o arquivo 
	rewind(fp); // reinicia o contador de posi��o de arquivo para o come�o
	while (!feof(fp)){
		fgets(str,79,fp);
		printf(str);
	}
}











