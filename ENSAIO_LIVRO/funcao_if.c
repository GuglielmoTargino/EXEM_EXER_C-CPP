# include<stdio.h>
# include <stdlib.h>

void main(void){
	
	int a,b;
	printf("digite dois numeros_");
	scanf("%d%d",&a,&b);
	/* f(b) significa que se b for zero, a expressao é falsa. e o else é executado*/
	if(b) printf(" resultado é %d", (a+b)); 
	else printf(" numero não pode ser dividido");
}
