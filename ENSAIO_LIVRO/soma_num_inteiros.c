/*
exerc�cio do livro c completo.
ele l� numeros inteiros do arquivo teste
e apresenta a soma deles.
Aluno: Guglielmo Targino.
Data: 27dez23
Vers�o:v0

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL,"Portuguese");
	FILE *fp;
	int sum=0;
	fp=fopen("ght","w"); /* modo de leitura deve ser "w"
						 	pois o arquivo n�o existe ainda.
						 	para ser lido.*/
	if(fp==NULL){
			printf(" arquivo n�o abre_");
			exit(1);
	
	}
	while(!feof(fp)){
		sum=getw(fp)+sum;
		printf("a soma � %d", sum);
		
	}
	
	fclose(fp);

	
}


