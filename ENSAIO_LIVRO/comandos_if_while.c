# include <stdio.h>
# include <stdlib.h>

void main(void){
	 int magico, pitaco;
	 
	 magico=rand(); /* gera numero aleat�rio*/
	 printf("digite um numero_");
	 
	 scanf("%d",&pitaco);/* espera digita��o do teclado*/
	 
	 if(magico==pitaco){
	 	printf("vc digitou %d acertou",pitaco);
	 	
	 } else{
	 	printf("magico foi %d, pitaco foi %d",magico,pitaco);
	 	
	 }
