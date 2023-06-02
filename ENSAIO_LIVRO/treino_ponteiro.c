#include <stdio.h>

void main(void){
	int a,b,d,*c;
	b=10;
	a=8;
	c=&a;
	d=5;
	printf("valor de b e %d\n",b);
	printf(" o endereço de b e %d\n",c);
	
	*c=a;
	printf(" b mudado e %d\n",b);
	*c=d;
	
	a=*c;
	printf("a mudado e %d\n",a);
	printf("endereço de c e %d\n",c);
}
