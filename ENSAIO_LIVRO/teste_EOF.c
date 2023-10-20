/*
Programa cria como exerc�cio a partir do livro c-completo.
Tem como objetivo mostrar o conte�do de um arquivo texto qualquer.

Editor/Aluno: Guglielmo Henriques Targino.
Data: 20/10/23
Vers�o: V0

*/
#include<stdio.h>
#include <stdlib.h>

void main (int argc, char *argv[]){
	
	FILE *fp;
	char ch;
	
	if((fp=fopen(argv[1],"r"))==NULL){
		printf("arquivo n�o abre\n");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
}
