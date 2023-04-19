# include <stdio.h>
# include <stdlib.h>
 
 /*void main(void){
 int x,y;
 x=5;
 y=2;
 printf("%d\n",x/y);
 printf("%d",x%2); 
}*/


	int xor(int a,int b);
	
	
void main(void){
	int g;
	g=20;
	printf("%d\n", xor(0,0));
	printf("&d\n", xor(0,1));
	printf("&d\n", xor(1,0));
	printf("&d\n", xor(1,1));
	printf(" valor logico %d", g>8);
}
	
	/* função para executar a xor chamada na função main*/
xor(a,b){
	return (a||b) && !(a&&b);
}


 
