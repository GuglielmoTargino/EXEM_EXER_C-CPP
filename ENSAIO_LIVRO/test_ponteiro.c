
/*
treino com ponteiros.
Aluno: Guglielmo TARGINO.
Data: 10abr24.
Vers�o: v0

*/


#include <stdio.h>

char *match(char c, char *s); /* modelo de prototipo*/

char *match(char c, char *s){
	while(c!=*s && *s) s++;
	return (s);
}


void main (void){
	
	int *vpt, g;
	g=10;
	
	vpt=&g;

	char s[80], *p, ch;
	printf("Digite uma string\n");
	gets(s);
	printf("Digite um caracter\n");
	ch=getchar();
	
	p=match(ch, s);
	if(*p){
	
 	 printf("tem %c em %s\n",ch, s);
 	  	 
 	}else
 	printf("nao encontrado %c em %s\n", ch, s);
 	
 	printf("ender�o de g � %p e seu valor � %d", vpt,g);
 	
	 
	 
	 
	 
	 	
}


