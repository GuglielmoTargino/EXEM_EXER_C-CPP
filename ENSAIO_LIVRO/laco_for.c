# include <stdio.h>
# include <stdlib.h>



void main(void){
	
	 char t[5];
	 int g;
	
	for(g=0;g<5;g++){
		
		printf("digite um caracter\n");
		
		scanf("%c",&t[g]);		
	}
	
	for(g=0;g<5;g++){
						 
        printf("o caracter é =%c \n",t[g]);
	}
}
