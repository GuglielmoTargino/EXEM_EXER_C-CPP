#include <stdio.h>


void main(void){
	char m[3][50];
	int i;
	
	for(i=0;i<3;i++){
		printf("digite uma frase_");
		gets(m[i]);
	}
	
	for(i=0;i<3;i++){
		printf(" as frases são_%s",(m[i]));
	
	}
	
	
}
