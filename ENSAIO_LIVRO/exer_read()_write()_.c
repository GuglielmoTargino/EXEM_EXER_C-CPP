/*
PROGRAMA CRIADO DE UM EXERCÍCIO DO LIVRO C-COMPLETO.
LÊ A ENTRADA DO TECLADO E ESCREVE NUM BUFFER EM UM ARQUIVO EM DISCO.

ALUNO/AUTOR: GUGLIELMO HENRIQUES TARGINO
DATA: 02/10/23
VERSAO:V0

*/

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <string.h>
#include <fnct1.h>

#define BUF_SIZE 128

void input(char *buf,int fd1);
void display(char *buf,int fd2);
void main(void){
	char buf(BUF_SIZE);
	int fd1, fd2;
	
	if((fd1=open("test",o_wronly))==1){//abre para escrita
	printf("o arquivo nao abre\n");
	exit(1);
		
	}
	input(buf,fd1);
	//fecha o arquivo e le de volta
	close(fd1);
	
	if((fd2=open("test",o_wronly))==-1){//abre para leitura
	printf("o arquivo nao abre\n");
	exit(1);
	
	}
	display(buf,fd2);
	close(fd2);
}
//insere testo

void input(char *buf, int fd1){
	int t;
	do{
		for(t=0;t<BUF_SIZE;t++;t++)buf[t]='\0';
		gets(buf);//le teclado
		if(write(fd1,buf,BUF_SIZE)!=BUF_SIZE){
			printf("erro de escrita\n");
			exit(1);
			
		}
	}while(strcmp(buf,"quit"));
}
//mostra arquivo
void display (char *buf, int fd2){
	for(;;){
		if(read(fd2,buf,BUF_SIZE)==0)return;
		printf("%s\n",buf);
	}
}

