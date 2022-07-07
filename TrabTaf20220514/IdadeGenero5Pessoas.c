#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
 
 
 
 
 
  
int main()
{	
	setlocale(LC_ALL,"Portuguese");
	system("color F");
	
	int i,g,idade;// i para controlar o laço, g para genero
	char nome[20];
	
	
	
 		 printf("========================================================\n");
		 printf("\t Seleção de homens maiores de 20 anos de idade entre 5 indicados.\n");
		 
		 for(i=1; i<=5; i++)
		 {
		 	
		 	switch (g){// função para aviso de seleção de genero digitado errado pelo usuario.
			 	   case 1 ...2:
		 		   volta:// desvio para retornar a digitar o genero digitado errado pelo usuario
		  		  printf("\nDigite o %iº nome para verificação.\n",i);
		 		  fflush(stdin);
		 		  gets(nome);
				   //volta:// desvio para retornar a digitar o genero digitado errado pelo usuario				  	
		 		  printf("\nDigite o genero: 1 /Masculino ou 2 /feminino.\n");
		 		  scanf("%i",&g);
		 		  printf("Agora digite a idade em anos.\n ");
		 		  scanf("%i",&idade);
	
				 
	
	
 				  if(g==1 && idade>20){
				   
 		 		 
	 
  	 			   		  printf("\tCandidato:%s\n",nome);
  						  printf("\tGenero indicado masculino: %i\n",g);
  	 				  	  printf("\tidade: %i\n",idade);
  	 				  	  printf("\tPessoa indicada atende o solicitado.\n");
		 			 }
		 			 
	 			 	 else{
					   
				  	 	  printf("\tCandidato:%s\n",nome);
		 		  	 	  printf("\tGenero indicado: %i\n",g);
		 		  	 	  printf("\tidade: %i\n",idade);
		 		  	 	  printf("\tPessoa não atende o solicitado.\n");
		
  		               }
  		               break;// função para aviso de seleção de genero digitado errado pelo usuario.
  		               default:// função para aviso de seleção de genero digitado errado pelo usuario.
  		               	printf("\tGENERO NÃO IDENTIFICADO. TENTE DE NOVO..\n");
  		               	i=i-1;// decrementa o contador para aviso de seleção de genero digitado errado pelo usuario.
 		               	goto volta;// desvio para retornar a digitar o genero digitado errado pelo usuario
               }
  
  		}
	system("pause");
	
	return 0;
}
