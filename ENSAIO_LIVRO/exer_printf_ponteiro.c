#include <stdio.h>

void main(void){
	char *p;
	printf("digite um endere�o_");
	scanf("%p",&p);//deve-se digitar um endere�o qualquer em hexadecimal
	printf("na posi��o %p tem %c\n",p,*p);// mostra ao que tem no endere�o digitado.
}
