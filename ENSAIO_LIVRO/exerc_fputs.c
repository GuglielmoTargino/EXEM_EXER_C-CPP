#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(void){
	char str[80];
	FILE *fp;
	
	if((fp=fopen("teste","w"))==NULL){
		printf("o arquivo não pode ser aberto.\n");
		exit(1);
	}
	do{printf("digite uma string (CR para sair):\n");
	
	gets(str);
	strcat(str,"\n");
	fputs(str,fp);
	
	}while(*str!='\n');
}
