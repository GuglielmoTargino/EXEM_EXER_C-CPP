/*
Exerc�io com a fun��o fseek()
Aluno: Guglielmo Targino
Data: 26dez23
Vers�o:v0
*/

#include <stdio.h>
#include <locale.h>




void main (void){
	setlocale(LC_ALL,"Portuguese");
	char s[10],*p;
	p=s;
	printf("digite uma frase quaquer_");
	while((*p++=getchar())!='\n');

	*p='\0'; //acrescenta o termnador de nulo
	printf(s);
	
}
