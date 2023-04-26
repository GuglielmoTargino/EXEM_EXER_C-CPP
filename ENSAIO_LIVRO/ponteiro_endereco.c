# include<stdio.h>

void main(void){
	int target, source;
	int *m;
	
	target=8;
	m=&target;
	source=*m;
	
	printf("o enderço de target é %d",m);
	printf("o valor de target é %d", target);	
	
}
