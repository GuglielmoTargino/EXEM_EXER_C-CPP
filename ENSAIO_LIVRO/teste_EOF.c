#include<stdio.h>
#include <stdlib.h>

void main (int argc, char *argv){
	
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
