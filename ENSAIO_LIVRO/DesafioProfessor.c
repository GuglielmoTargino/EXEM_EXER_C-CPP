/*

Exercício resolução Sesafio Numerologia Professor

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
	int i,cx,delta,ce,de,un,uni,dec,code,resu;
	delta=0;
	
	printf("=============================================\n");
	printf("PROGRAMA DESENVOLVIDO POR GUGLIELMO TARGINO.\n");
	printf("ALUNO DO CURSO DE CIÊNCIA DA COMPUTAÇÃO\n");
	printf("UNIVERSIDADE NOVE DE JULHO-UNINOVE\n");
	printf("=============================================\n");
	printf("SAIBA SEU NÚMERO DA SORTE- TÉCNICA EGÍPSIA\n");
	printf("=============================================\n");
	
	printf("Digite seu nome_\n");
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
			printf("ERRO. Favor não digitar números ou simbolos_\n");
			i=cx;
			delta=0;
	}
	
	}
	
		ce=delta/100;	
		de=(delta%100)/10;
			
		un=delta%10;
		code=un+de+ce;
		dec=code/10;
		uni=code%10;
		resu=dec+uni;
		
		if(delta==11 || delta ==22){
			printf(" Seu número mestre da sorte é %d.\n",delta);
		}else{
			printf("Resultado para cáculo: %d\n ",delta);
	/*printf(" CE é %d\n ",ce);
	printf(" DE é %d\n ",de);
	printf(" UN é %d\n ",un);
	printf(" CODE é %d\n ",code);*/
	printf("Seu número da sorte é %d.\n ",resu);
			
		}
		
		
	
	system("pause");
	
	
	}
	
	

