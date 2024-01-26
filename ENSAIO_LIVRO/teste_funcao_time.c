/*
Exexrcício com função que acesso o local time

Aluno: Guglielmo Targino.
Data:25jan24.
Versão: v0.

*/

#include <time.h>
#include <stdio.h>
#include <locale.h>


void main (void){
	
	setlocal(LC_ALL,"Portuguese");
	
	time_t start,end;
	long unsigned t;
	start=time(NULL);
	
	for (t=0;t<10;t++);
	end =time(NULL);
	printf(" O laço usou %f segundos.\n", difftime(end,start));
	
	
}
