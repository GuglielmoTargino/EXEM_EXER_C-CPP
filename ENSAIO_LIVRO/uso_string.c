/*

Exerc�cio com manipula��o de string

Aluno: Guglielmo Targino
Data:28fev24

vers�o: v2



*/

#include<stdio.h>
#include<string.h>
void main(void){
	char s1[20],s2[20];
	printf("digite uma string\n");
	gets(s1);
	printf("digite outra string\n");
	gets(s2);
	printf("comprimento de s1=%d, comprimento s2=%d\n",strlen(s1),strlen(s2));
	if(!strcmp(s1,s2)) printf("as strings s�o iguais");
	strcat(s1,s2);
	printf("%s\n",s1);
	printf("%s\n",s2);
	strcpy(s1,"isso � um teste de s1.\n");
	printf(s1);
	if(strchr("alo",'m')) printf("o est� em alo\n");
	if(strstr("ol� aqui","ol�")) printf("ola encontrado em ol� aqui");	
}
