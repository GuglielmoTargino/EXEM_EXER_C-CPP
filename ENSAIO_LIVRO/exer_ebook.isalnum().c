/*

Eerc�cio do ebook com fun��o isalnum().

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
		if (isalnum(ch)) printf("%c � alfanumerico\n",ch);
		printf("Precione um espa�o para sair.");
	}
}


