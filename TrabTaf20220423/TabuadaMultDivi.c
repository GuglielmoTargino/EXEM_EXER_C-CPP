#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int cont=1;
	int num;
	int selet;
	printf("\n\tEscolha a operação da tabuada. 2 para multiplicação ou 1 para divisão.\n");
	scanf("%d",&selet);
	printf("\n\tAgora digite um número de 1 à 10 para saber a tabuada.\n");
	scanf("%d",&num);

	switch(selet){
				  case 1:
  	   			  	   do{
				  	   	  printf("\t%.2d / %.2d = %.2d\n",cont*num,num,cont);
					 	  cont=cont+1;
					 				
						}while (cont<=10);
   	 	            	break;
                  
                  	 case 2:
                  	   do{
					   printf("\t%d x %.2d = %.2d\n",num,cont,cont*num);
					   cont=cont+1;
				
					   }while (cont<=10);
 				   	   break;
	   	   			   default:
	   	   	 	   	   printf("\nPrimeiro escolha multiplicação ou divisão.\n");
	}
		
				
	   
	system("pause");
	return 0;
}


