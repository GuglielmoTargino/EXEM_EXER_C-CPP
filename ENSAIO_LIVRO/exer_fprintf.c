//Exercicio com fun��o fprintf()
//Sluno: Guglielmo Targino
//Data: 20/dez/23
//Vers�o: v0

#include <stdio.h>
#include <stdlib.h>

void main (void){
	FILE *fp;
	if((fp=fopen("teste","wb"))==NULL){
		printf("arquivo nao abre");
		exit(1);
	}
	printf("isto � um teste %d %f",10,20.01);
	fclose(fp);
}
