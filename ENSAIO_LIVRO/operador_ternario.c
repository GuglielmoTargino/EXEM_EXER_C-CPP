# include <stdlib.h>
# include <stdio.h>




void main(void){
	
	int x=10;
	int y;
	int g;
	y=x>9? 100 /*lado verdadeiro*/:200 /*lado falso*/;
	
	printf("O resultado � _%d",y);
	
	if(x>8) g=50; else g=80;
	printf(" g � igual a _%d",g);
	
}


