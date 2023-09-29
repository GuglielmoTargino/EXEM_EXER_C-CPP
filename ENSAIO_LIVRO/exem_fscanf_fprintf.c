/*	exemplo test de fcanf() e fprointf().
	Estudante: Guglielmo Henriques Targino
	Data: 29/09/23
	Versão: V0.
*/

#include <stdio.h>
#include <stdlib.h>
#include <io.h>

void main(void){
	
	FILE *fp;
	char s[80];
	int t;
	if((fp=fopen("test", "w"))==NULL){
		
		printf("o arquivo não abre\n");
		exit(1);
		
	}
	printf("digite uma string e um numero");
	fscanf(stdin,"%s%d",s,&t); // lê o teclado
	
	fprintf(fp, "%s%d",s,t); //escreve no arquivo
	fclose(fp);
	
	if((fp=fopen("test","r"))==NULL){
		printf("o arquivo não abre");
		exit(1);
	}
	fscanf(fp,"%s%d",s,&t); // lê do arquivo
	fprintf(stdout,"%s%d",s,t); //imprime na tela
	
	
}
