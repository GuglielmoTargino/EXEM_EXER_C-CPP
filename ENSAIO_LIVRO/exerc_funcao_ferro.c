// trecho de programa do livro linguagem C, transcrito para estudo e exercício.
//  aluno: Guglielmo Henriques Targino.
//  data: 15/09/23
//  versão: v0.*/

#include <stdio.h>
#include <stdlib.h>

#define TAB_SIZE 8
#define IN 0
#define OUT 1


void err(int e);

void main(int argc, char *argv[]){
	FILE *in,*out;
	int tab, i;
	char ch;
	
	if(argc!=3){
		printf("uso: detab <entrada> <saida>\n");
		exit(1);
		}
	
	if((out=fopen(argv[2],"wb"))==NULL){
		printf("o arquivo %s não pode ser aberto. \n", argv[2]);
		exit(1);
		
	}
	tab=0;
	do{
		ch=getc(in);
		if(ferror(in)) err(IN);
		/*
		se encontro um tab, então encia o numero certo de espaços
		*/
		if(ch=='\t'){
			for(i=tab;i<8;i++){
				putc(' ',out);
				if(ferror(out)) err(OUT);
			}
			tab=0;
			
		}else {
		putc(ch,out);
		if(ferror(out)) err(OUT);
		tab++;
		if(tab==TAB_SIZE) tab=0;
		if(ch=='\n'||ch=='\r') tabh=0;
		}
	} 
	
 	 	while(!feof(in));
		fclose(in);
		fclose(out);
	
	
}

void err(int e){
	if(e==IN) printf("Erro na entrada.\n");
	else printf("Erro na saida \n");
	exit(1);
}

