#include <stdio.h>

void main(void){
	char *p;
	printf("digite um endere�o_");
	scanf("%p",&p);
	printf("na posi��o %p tem %c\n",p,*p);
}
