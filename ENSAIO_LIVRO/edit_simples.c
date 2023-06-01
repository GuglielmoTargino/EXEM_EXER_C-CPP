#include<stdio.h>
#define max 100
#define len 80



char text [max][len];
/* iditor de texto simples*/

void main (void){
	register int t,i,j=0;
	printf("digite uma linha vazia para sair.\n");
	
	for(t=0;t<max;t++){
		printf("%d",t);
		gets(text[t]);
		if(!*text[t]) break; /* sai se a linha for vazia*/
		
	}
	
	for(i=0;i<t;i++){
		for(j=0;text[i][j];j++) putchar(text[i][j]);
	
		putchar('\n');
	}
}
