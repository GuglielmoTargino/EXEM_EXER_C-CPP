# include<stdio.h>

void main(void){
	int target, source;
	int *m;
	
	target=8;
	m=&target;
	source=*m;
	
	printf("o ender�o de target � %d",m);
	printf("o valor de target � %d", target);	
	
}
