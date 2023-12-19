
// Exercicio do livro c-completo. 
// Teste da função feof();
// Aluno: Guglielmo Targino.
//data a2023m12d19
// versão_v1
#include <stdio.h>
#include <stdlib.h>

void main (int argc, char *argv[]){
	
	FILE *fp;
	char str [128];
	
	if ((fp=fopen(argv[1],"r"))==NULL){
		printf(" o arquivo não abre");
		exit(1);
	}
	while(!feof(fp)){
		if (fgets(str,126,fp)) printf("%s",str);
	}
	fclose(fp);
}
