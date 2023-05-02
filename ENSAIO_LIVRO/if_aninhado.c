# include <stdio.h>
#include <stdlib.h>


int pitaco,comput;

void main(void){
	
	comput=rand();
	printf("digite um numero_");
	scanf("%d", &pitaco);
	
	if(pitaco==comput) {
		
	printf("vc acertou!");
	}	else {
		 	 printf("vc errou.");
		 	 if(pitaco > comput) printf(" numero muito grande.");
		 	 else printf("numero muito pequeno");
	}
}
