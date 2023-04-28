# include <stdio.h>
# include <stdlib.h>

void main(void){
	 int magico, pitaco;
	 
	 magico=rand();
	 pitaco=2;
	 printf("digite um numero_");
	 scanf("%d",&pitaco);
	 
	 if(magico==pitaco){
	 	printf("vc digitou %d acertou",pitaco);
	 	
	 } else{
	 	printf("magico foi %d, pitaco foi %d",magico,pitaco);
	 	
	 }
