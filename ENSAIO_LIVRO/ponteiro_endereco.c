# include<stdio.h>

void main(void){
	
	int target, source;
	int *m;/* forma de declarar uma ptr( vari�vel ponteiro)*/
	float a,b,r;
	float *ptr_a, *ptr_b;
	
	a=7.3;
	b=11.5;
	ptr_a=&a;
	ptr_b=&b;
	r=*ptr_a+*ptr_b;
	
	target=8; 
	m=&target; /* m recebe o endere�o de target*/
	source=*m; /* source recebe o valor registrado no ender�o passado em m*/
	
	printf("o endere�o de target � %d\n",m);
	printf("o valor de target � %d\n", target);	
	printf("soma de a com b utilizando ponteiro � %.2f",r);
}
