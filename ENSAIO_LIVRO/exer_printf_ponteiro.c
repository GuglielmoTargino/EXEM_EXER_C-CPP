#include <stdio.h>

void main(void){
	char *p;
	printf("digite um endereço_");
	scanf("%p",&p);
	printf("na posição %p tem %c\n",p,*p);
}
