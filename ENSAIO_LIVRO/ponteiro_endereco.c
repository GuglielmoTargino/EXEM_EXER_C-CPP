# include<stdio.h>

void main(void){
	
	int target, source;
	int *m;/* forma de declarar uma ptr( variável ponteiro)*/
	float a,b,r;
	float *ptr_a, *ptr_b;
	
	a=7.3;
	b=11.5;
	ptr_a=&a;
	ptr_b=&b;
	r=*ptr_a+*ptr_b;
	
	target=8; 
	m=&target; /* m recebe o endereço de target*/
	source=*m; /* source recebe o valor registrado no enderço passado em m*/
	
	printf("o endereço de target é %d\n",m);
	printf("o valor de target é %d\n", target);	
	printf("soma de a com b utilizando ponteiro é %.2f",r);
}
