#include <stdio.h>
#include <stdlib.h>

void main(int argc,char argv[]){
	if(argc!=2){
		printf("vc n�o digitou seu nome correto_\n");
		exit(1);
	}
	printf("ol� %s",argv[1]);
	
}
