#include <stdio.h>

void main(void){
	char *p;
	printf("digite um endereço_");
	scanf("%p",&p);//deve-se digitar um endereço qualquer em hexadecimal
	printf("na posição %p tem %c\n",p,*p);// mostra ao que tem no endereço digitado.
}
