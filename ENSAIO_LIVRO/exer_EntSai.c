/*
Programa criado como exercicio do livro c-completo.
Titulo: Arquivos de E/S.
Aluno: Guglielmo Henriques Targino
Data: 17/10/23
Versão: V0.


*/



#include <conio.h>

void main (void){
	char s[23];
	
	s[0]=20;
	cputs("digite uma estring");
	cgets(s);
	cputs(&s[2]);
}
