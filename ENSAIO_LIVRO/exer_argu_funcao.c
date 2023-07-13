# include <stdio.h>
#include <ctype.h>

void print_upper(char *string);

void main(void){
	
	char s[80];
	printf("digite uma palavra.");
	gets(s);
	print_upper(s);
}
/* imprime uma string em maiuscula*/
void print_upper(char *string){
	int t;
	printf("em maiuscula fica assim:\n");
	for(t=0;string[t];++t){
		string[t]=toupper(string[t]);
		
		putchar(string[t]);
	}
}
