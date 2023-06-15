#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
	char *s;
	int t;
	s=malloc(80);
	
	/* se s voltar nulo, ! inverte ele , ai passa a ser verdadeiro*/
	if(!s){
		printf("falha na memoria solicitada");
		exit(1);
	}
	gets(s);
	for(t=strlen(s)-1; t>=0; t--) putchar(s[t]);
	free(s);
}

