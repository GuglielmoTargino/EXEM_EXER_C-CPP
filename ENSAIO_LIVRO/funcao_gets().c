/*
Este programa usa  função gets() para ler um nome de arquivo

Aluno: Guglielmo Targino
Data: 26dez23
Versão:v0

*/

#include<stdio.h>
#include<stdlib.h>

int main (void){
	FILE *fp;
	char fname[20];
	printf("digite um nome de arquivo_");
	gets(fname);
	if((fp=fopen(fname,'r'))!=NULL){
		printf("o arquivo nao abre_");
		exit(1);
	}
	fclose(fp);
	return 0;
}

