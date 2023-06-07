#include <stdio.h>
#include <stdlib.h>

#define size 4 /* tamanho da pilha, 4 niveis*/


void push(int i);

int pop(void);
int *tos, *p1, stack[size];

void main(void){
	
	int value;
	tos=stack; /* limita o tamanho da pilha */
	p1=stack; /* monitora a movimentação no tamanho da pilha*/
	
	do{
		printf("didgite o valor");
		scanf("%d",&value); /*insere elementos na pilha*/
		if(value!=0)push(value); else printf("valor do topo é %d\n",pop());
		
	} while (value!=-1);
	
}
void push(int i){
	
	p1++;
	if(p1==(tos+size)){
		printf("estouro da pilha");
		exit(1);
		
	}
	*p1=i;
	
}
pop(void){
	
	if(p1==tos){
		printf("estouro da pilha");
		exit(1);
	}
	p1--;
	return *(p1+1);
}

