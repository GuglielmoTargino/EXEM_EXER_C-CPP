#include<stdio.h>
#include<stdlib.h>

void main (int argc, char *argv[]){
	
	FILE *fp;
	char ch, BOF;
	BOF=' ';
	
	if((fp=fopen(argv[1],"r"))==NULL){
		
		printf("o arquivo não existe");
		exit(1);
		
	}
	while((ch=fgetc(fp))!=BOF){
		printf("%c",ch);
	}
	fclose(fp);
}
