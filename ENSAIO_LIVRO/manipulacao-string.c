/*

Exercício com manipulação de string

Aluno: Guglielmo Targino
Data:28fev24

versão: v2

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
		
}
