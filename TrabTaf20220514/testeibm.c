#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void  perimetroRetang(int b){
	
	int limit=b;
	int i;
	
		for (i=1;i<=limit; i++){
			
			if (i%3==0 && i%5==0 ){
				printf("\n FizzBuzz");				
			}else if (i%5==0){
				printf("\n Buzz");				
			}else if (i%3==0){
                 printf("\n Fizz");
			}else{
				printf("\n %d",i);	
			}	
	}

}

int main(){
	
	system("color 1E");
	setlocale(LC_ALL,"Portuguese");
   
   int b,peri;

   
   printf("Calculando as dimens�es do ret�ngulo\n");
   printf("**********************************\n");
   
   printf("Digite o valor da base do ret�ngulo: \n");
   scanf("%d",&b);
   
 
   perimetroRetang(b);// � aqui que a fun��o � chamada.

   
	return 0;
}
