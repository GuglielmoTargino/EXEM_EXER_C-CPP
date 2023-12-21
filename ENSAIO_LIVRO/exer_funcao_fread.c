//exercicio com função fread()
//Aluno:guglielmo Targino
// Data: 21dez23
//versão: v0

#include <stdio.h>
#include <stdlib.h>

void main (void){
	FILE *fp;
	float bal[10];
	if((fp=fopen("teste","rb"))==NULL){
		printf("O arquivo não abre");
		exit(1);
	}
	if(fread(bal,sizeof(float),10,fp)!=10){
		if(feof(fp)) printf("fim de arquivo prematuro");
		else printf("erro na leitura");
	}
	fclose(fp);
	
}
