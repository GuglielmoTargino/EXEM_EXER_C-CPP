/*

Exercício com manipulação de string

Aluno: Guglielmo Targino
Data:28fev24

versão: v2

*/

#include<stdio.h>
#include<string.h>
#include <locale.h>


void main(void){
	
	setlocale(LC_ALL,"Portuguese");
	char s1[200];
	char caractere='0';
	int i;
	printf("digite uma string\n");
	
	
	
	gets(s1);
	
	printf("%s tem %d caracteres que são \n",s1,strlen(s1));
	
	
	    i=0;
	while(caractere!=NULL)	{
	    
		printf("Caractere %d é %c \n",i,s1[i]);
		
		caractere=s1[i];
		i++;
	}
}
