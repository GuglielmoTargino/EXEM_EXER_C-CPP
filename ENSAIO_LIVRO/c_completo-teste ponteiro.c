
/*
Exerc�cio criado para treino com ponteiros

Aluno: Guglielmo Targino.
Data: 29fev24
Ves�o: V0.


*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int g,j;
	int *h;
	g=20;
	h=&g;
	j=*h;
	
	printf( "valor de g �:%d \n",g);
	printf(" o endereco de g �: %p",j);
	
	
	
}










