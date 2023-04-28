# include <stdio.h>
# include <stdlib.h>

void main(void){
	 int magico, pitaco;
	 
	 magico=rand(); /* gera numero aleatório*/
	 printf("digite um numero_");
	 
	 scanf("%d",&pitaco);/* espera digitação do teclado*/
	 
	 if(magico==pitaco){
	 	printf("vc digitou %d acertou",pitaco);
	 	
	 } else{
	 	printf("magico foi %d, pitaco foi %d",magico,pitaco);
	 	
	 }
