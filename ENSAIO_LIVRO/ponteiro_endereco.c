# include<stdio.h>

void main(void){
	
	int target, source;
	int *m;/* forma de declarar uma vari�vel como ponteiro*/
	
	target=8; 
	m=&target; /* m recebe o endere�o de target*/
	source=*m; /* source recebe o valor registrado no ender�o passado em m*/
	
	printf("o endere�o de target � %d\n",m);
	printf("o valor de target � %d", target);	
	
}
