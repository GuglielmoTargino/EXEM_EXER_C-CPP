# include<stdio.h>
# include <stdlib.h>

void main(void){
	int g,h;
	int *m;
	g=10;
	m=&g;
	h=*m;
	printf("ender de g é %d\n",&g);
	printf("valor de g é %d",*m);
	

}

/*	int a,b;
	printf("digite dois numeros_");
	scanf("%d%d",&a,&b);
	/* f(b) significa que se b for zero, a expressao é falsa. e o else é executado*/
	/*if(b) printf(" resultado é %d", (a+b)); 
	else printf(" numero não pode ser dividido");*/
