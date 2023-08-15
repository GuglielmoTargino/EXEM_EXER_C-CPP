#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
	
	FILE *fp;
	char ch;
	
	if (argc!=2){
		printf("vc esqueceu de digitar um arquivo_");
		exit(1);
	}
	if((fp=fopen(argv[1],"w"))==NULL){
		printf("o arquivo não pode ser aberto");
		exit(1);
	}
	do {
		ch=getchar();//le caracter
		putc(ch,fp);
		

	} while (ch!='$');
	fclose(fp);
	
}
