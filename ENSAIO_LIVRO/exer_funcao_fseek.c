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
	while((p++=getchar())!='\n');
	printf("digite um n�mero quaquer_");
	*p='\0'; //acrescenta o termnador de nulo
	printf(s);
	
}
