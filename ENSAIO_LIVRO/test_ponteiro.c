#include <stdio.h>

char *match(char c, char *s); /* modelo de prototipo*/


void main (void){

	char s[80], *p, ch;
	gets(s);
	ch=getchar();
	p=match(ch, s);
	if(*p){
	
 	 printf("tem %c em %s",ch, s);
 	  	 
 	}else
 	printf("nao encontrado %c em %s", ch, s);	
}

char *match(char c, char *s){
	while(c!=*s && *s) s++;
	return (s);
}
