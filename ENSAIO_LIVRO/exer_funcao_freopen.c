/*exercicio com a função freopen
Aluno: Guglielmo Targino
data: 21dez23
versão:v0
*/
#include <stdio.h>
#include <stdlib.h>

void main(void){
	
	FILE *fp;
	printf("isso é mostrado na tela");
	if((fp=freopen("out","w",stdout))==NULL){
		printf("o arquivo não abre");
		exit(1);
	}
	printf("isso será escrito no arquivo out");
	fclose(fp);
}
