# include<stdio.h>
# include <stdlib.h>

void main(void){
	int g,h;
	int *m;
	g=10;
	m=&g;
	h=*m;
	printf("ender de g � %d\n",&g);
	printf("valor de g � %d",*m);
	

}

/*	int a,b;
	printf("digite dois numeros_");
	scanf("%d%d",&a,&b);
	/* f(b) significa que se b for zero, a expressao � falsa. e o else � executado*/
	/*if(b) printf(" resultado � %d", (a+b)); 
	else printf(" numero n�o pode ser dividido");*/
