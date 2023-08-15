#include <stdio.h>
#include <stdlib.h>
 // DTOS: é um programa que ler qualquer arquivo mostrado na tela.
void main(int argc, char *argv[]){
	
	FILE *fp;
	char ch;
	if(argc!=2){
		printf("vc esqueceu de digitar um arquivo_");
		exit(1);
	}
	
	if((fp=fopen(argv[1],"r"))==NULL){
		printf("arquivo não pode ser aberto\n");
		exit(1);
	}
	ch=getc(fp); /*le um caracter**/
	
	while (ch!=EOF){
		putchar(ch);
	}
	fclose(fp);
	
}
