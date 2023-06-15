#include <stdio.h>
#include <stdlib.h>

int pwr(int a, int b);
void table(int p[4][10]);
void show(int p[4][10]);


void main(void){
	int *p;
	p=malloc(40*sizeof(int));
	 /* testa se tem espaço memoria disponivel*/
	if(!p){
		printf("falha memoria solicitada\n");
		exit(1);
	}
	/* p é simplesmente um ponteiro aqui */
	table(p);
	show(p);
}
	/* constroi tabela de potencia*/
	
	void table(int p[4][10]){
		int i,j;
		for(j=1;j<11;j++)
	 	  for(i=1;i<5;i++)	p[i-1][j-1]=pwr(j,i);		
	}
	
	/* mostra a tabela de potencia inteira*/
	void show(int p[4][10]){
		int i,j;
		printf("%9s %9s %9s %9s\n","N","N^2","n^3","N^4");
	 	for(j=1;j<11;j++){
		 for(i=1;i<5;i++) printf("%10d",p[i-1][j-1]);
		 printf("\n");
		}
	}
	
	/*eleva um inteiro a uma potencia especializada*/
	pwr(int a,int b){
		int t=1;
		for (;b;b--) t=t*a;
		return t;
	}

