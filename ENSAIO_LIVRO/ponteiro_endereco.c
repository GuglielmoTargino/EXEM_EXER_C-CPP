# include<stdio.h>

void main(void){
	
	int target, source;
	int *m;/* forma de declarar uma variável como ponteiro*/
	
	target=8; 
	m=&target; /* m recebe o endereço de target*/
	source=*m; /* source recebe o valor registrado no enderço passado em m*/
	
	printf("o endereço de target é %d\n",m);
	printf("o valor de target é %d", target);	
	
}
