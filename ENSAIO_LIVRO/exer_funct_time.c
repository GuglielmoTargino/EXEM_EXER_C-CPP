/*
Exercício com função de acesso ao sistema.
Aluno:Guglielmo Targino.
Data: 23jan24.
Versão:v0.



*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main (void){
	
	struct tm *ptr;
	time_t lt;
	
	lt=time(null);
	ptr=localtime(&lt);
	printf(asctime(ptr));	
	
	
}
