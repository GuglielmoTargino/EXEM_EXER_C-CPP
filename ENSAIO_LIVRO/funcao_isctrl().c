/*

exercicio do livro.

fun��o isctrl().

Aluno: Guglielmo Targino.
Data: 22jan24.
Vers�o: v0.



*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void){
	setlocale(LC_ALL,"Portuguese");
	char ch;
	
	
	for(;;){
	ch=getchar();
	if(iscntrl(ch)==' ') break;
	printf(" %c � um caracter de controle",ch);
	} 
}
