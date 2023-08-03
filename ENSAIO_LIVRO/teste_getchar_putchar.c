#include <stdio.h>
#include <ctype.h>

void main(void){
	char ch;
	printf("digite um caracter ou um ponto para finalizar\n");
	do {
		ch=getchar(); //pega o caracter digitado no teclado e salva em ch
		
			if(isupper(ch)) ch=tolower(ch);
			else ch=toupper(ch);
			
			putchar(ch);
		
	}while (ch!='.');
}
