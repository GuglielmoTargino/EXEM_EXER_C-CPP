#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv){
	FILE *fp;
	if(argc!=3){
		printf("uso: seek nomearg byte\n");
		exit(1);
				
	}
	if(fseek(fp=fopen(argv[1],"r")==NULL)){
		printf("o arquivo nao abre\n");
		exit(1);
		
	} if(fseek(fp,atol(argv[2]),seek_set)){
		printf("erro na busca\n");
		exit(1);
	}
	printf("o byte em %1d é %c.\n", atol(argv[2]), getc(fp));
	fclose(fp);
}


