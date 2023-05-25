#include<stdio.h>

void main(void){
	char ch;
	print("1. para verificar ortografia\n");
	printf("2. para corrigir ortografia\n");
	printf("3. para mostrar erros\n");
	printf("Faça uma escolha.");
	
	do{
		ch=getchar(); /* pega o digitado no teclado*/
		switch(ch){
			case '1':
				check_spelling(); /*funcao não implementada*/
				break;
			case '2':
				correct_erros();/*funcao não implementada*/
				break;
			case '3':
				display_erros();/*funcao não implementada*/
				break;				
		}
	} while(ch!='1' && ch!='2' && ch!='3');
}
