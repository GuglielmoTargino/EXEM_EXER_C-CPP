/*

Exerc�cio resolu��o Sesafio Professor

Aluno: Guglielmo Targino
Data:15mar24

vers�o: v0

*/

#include<stdio.h>
#include<string.h>
#include <locale.h>
#include <ctype.h>

void main(void){
	
	setlocale(LC_ALL,"Portuguese");
	char s1[100],s2[100];
	int i,cx;
	
	printf("digite uma string\n");
	gets(s1);
	cx=strlen(s1);
	
	for(i=0;i<cx;i++){
		s2[i]=tolower(s1[i]);
		
		
		switch(s2[i]){
		
		case 'a':
			printf(" a Vale 1\n ");
			break;
		case 'g':
			printf("g Vale 10\n");
			break;
		case 'u':
			printf("u vale Vale 8\n");
			break;
		default:
			printf("escolha invalida\n");
	}
		
	}
	
	
	
	/*
	
	printf("comprimento de s1 � =%c\n",s1[i]); imprime s� um caractere
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
	*/
}
