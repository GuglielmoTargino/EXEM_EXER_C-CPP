# include<stdio.h>
# include <stdlib.h>

void main(void){
	
	int a,b;
	printf("digite dois numeros_");
	scanf("%d%d",&a,&b);
	/* f(b) significa que se b for zero, a expressao � falsa. e o else � executado*/
	if(b) printf(" resultado � %d", (a+b)); 
	else printf(" numero n�o pode ser dividido");
}
