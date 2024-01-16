/*

Eercício do ebook com função isalnum().

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL,"Portuguese");
	
	char ch;
	
	for(;;){
		
		ch=getc(stdin);
		if(ch==' ') break;
		if (isalnum(ch)) printf("%c é alfanumerico\n",ch);
		printf("Precione um espaço para sair.");
	}
}


