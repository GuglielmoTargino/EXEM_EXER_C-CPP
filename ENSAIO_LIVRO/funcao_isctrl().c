/*

exercicio do livro.

função isctrl().

Aluno: Guglielmo Targino.
Data: 22jan24.
Versão: v0.



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
	printf(" %c é um caracter de controle",ch);
	} 
}
