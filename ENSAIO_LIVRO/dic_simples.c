#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>

//lista simples de palavras
char *dic[][40]={
"atlas","um livro de mapas","carro",
"veiculo motorizado","telefone",
"um dispositivo de comunicação","aviao","uma maquina voadora",
"",""/*nulo termina a lista*/};

void main(void){
	char word[80],ch;
	char **p;
	do{
		puts("\ndigite uma palavra para saber seu significado_");
		gets(word);
		p=(char**)dic;
		//acha a palavra no dicionario
	   do{
			if(!strcmp(*p,word)){
			puts("significado:");
			puts(*(p+1));
			break;
		}if(!strcmp(*p,word))
		break;
		p=p+2; //\v\nc\ \ lista
		
		}while (*p);
		if(!*p)puts ("a palavra não está no dicionario");
		printf("outra palavra? S/N");
		ch=getche();
	}while(toupper((ch)=='N'));
}
