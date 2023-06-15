#include <stdio.h>
#include <stdlib.h>

int pwr(int a, int b);
void table (int p[4][10]);
void show(int p[4][10]);


void main(void){
	int *p;
	p=malloc(40*sizeof(int));
	 /* testa se tem espaço memoria disponivel*/
	if(!p){
		printf("falha memoria solicitada");
		exit(1);
	}
	/* constroi tabela de potencia*/
	
	void table(int [4][10]){
		int i,j;
		for(j=1;j<11;j++)
		p[i-1][j-1]=pwr(j,i);
		
	}
	/* mostra a tabela de potencia inteira*/
	
}
