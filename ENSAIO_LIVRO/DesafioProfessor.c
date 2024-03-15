/*

Exercício resolução Sesafio Professor

Aluno: Guglielmo Targino
Data:15mar24

versão: v0

*/

#include<stdio.h>
#include<string.h>
#include <locale.h>
#include <ctype.h>

void main(void){
	
	setlocale(LC_ALL,"Portuguese");
	char s1[100],s2[100];
	int i,cx,delta;
	delta=0;
	
	printf("digite uma string\n");
	gets(s1);
	cx=strlen(s1);
	
	for(i=0;i<cx;i++){
		s2[i]=tolower(s1[i]);
		
		
		switch(s2[i]){
		case ' ':			
			
			break;
		
		case 'a':
		
			delta+=1;
			break;			
		case 'b':
			
			delta+=2;
			break;
	
		case 'c':
			
			delta+=3;
			break;
		case 'd':
			
			delta+=4;
			break;
			
		case 'e':
			
			delta+=5;			
			break;
			
		case 'f':
			
			delta+=6;
			break;
		case 'g':
			
			delta+=7;
			break;
		case 'h':
			
			delta+=8;
			break;
		case 'i':
			
			delta+=9;
			break;
		case 'j':
			
			delta+=1;
			break;
		case 'k':
			
			delta+=2;
			break;
		case 'l':
			
			delta+=3;
			break;
		case 'm':
			
			delta+=4;
			break;
		case 'n':
			
			delta+=5;
			break;
		case 'o':
			
			delta+=6;
			break;
		case 'p':
			
			delta+=7;
			break;
		case 'q':
			
			delta+=8;
			break;
		case 'r':
			
			delta+=9;
			break;
		case 's':
			
			delta+=1;
			break;
		case 't':
			
			delta+=2;
			break;
		case 'u':
			
			delta+=3;
			break;
		case 'v':
			
			delta+=4;
			break;
		case 'w':
		
			delta+=5;
			break;
		case 'x':
			
			delta+=6;
			break;
		case 'y':
			
			delta+=7;
			break;
		case 'z':			
			delta+=8;
			break;
		default:
			printf("Não vale digitar numeros ou simbolos_)");
	}
	
	}
	
	
	
	/*
	
	printf("comprimento de s1 é =%c\n",s1[i]); imprime só um caractere
	printf("digite outra string\n");
	gets(s2);
	printf("comprimento de s1=%d, comprimento s2=%d\n",strlen(s1),strlen(s2));
	if(!strcmp(s1,s2)) printf("as strings são iguais");
	strcat(s1,s2);
	printf("%s\n",s1);
	printf("%s\n",s2);
	strcpy(s1,"isso é um teste de s1.\n");
	printf(s1);
	if(strchr("alo",'m')) printf("o está em alo\n");
	if(strstr("olá aqui","olá")) printf("ola encontrado em olá aqui");	
	*/
	printf(" A soma é %d\n ",delta);
}
