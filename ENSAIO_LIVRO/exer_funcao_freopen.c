/*exercicio com a fun��o freopen
Aluno: Guglielmo Targino
data: 21dez23
vers�o:v0
*/
#include <stdio.h>
#include <stdlib.h>

void main(void){
	
	FILE *fp;
	printf("isso � mostrado na tela");
	if((fp=freopen("out","w",stdout))==NULL){
		printf("o arquivo n�o abre");
		exit(1);
	}
	printf("isso ser� escrito no arquivo out");
	fclose(fp);
}
