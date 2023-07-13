#include <stdio.h>
#include <stdlib.h>

void main(int argc,char argv[]){
	if(argc!=2){
		printf("vc não digitpou seu nome_\n");
		exit(1);
	}
	printf("olá %s",argv[1]);
	
}
