/*

Exerc�cio com manipula��o de string

Aluno: Guglielmo Targino
Data:28fev24

vers�o: v2

*/

#include<stdio.h>
#include<string.h>
#include <locale.h>


void main(void){
	
	setlocale(LC_ALL,"Portuguese");
	char s1[20];
	char caractere='0';
	int i;
	printf("digite uma string\n");
	strcpy(s1,"guga");
	
	
	//gets(s1);
	
	printf("Comprimento de s1=%d � \n",strlen(s1));
	
	
	    i=0;
	while(caractere!=NULL)	{
	    
		printf("Caractere %d � %c \n",i,s1[i]);
		caractere=s1[i];
		i++;
	}
}
