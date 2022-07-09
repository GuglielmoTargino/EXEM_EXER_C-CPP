#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int perimetroRetang(int b, int h){
	
	return ((b+h)*2);// retorna o valor do perimetro.
}

int areaRetang(int b, int h){
	
	return(b*h);
}

float diagRetang(int b, int h){
	return (sqrt((b*b)+(h*h)));
}



int main(){
	system("color 1E");
	setlocale(LC_ALL,"Portuguese");
   
   int b,h,peri,area;
   float diag;
   
   printf("Calculando as dimens�es do ret�ngulo\n");
   printf("**********************************\n");
   
   printf("Digite o valor da base do ret�ngulo: \n");
   scanf("%d",&b);
   
   printf("Digite o valor da altura do ret�ngulo\n");
   scanf("%d",&h);
   
   peri= perimetroRetang(b,h);// � aqui que a fun��o � chamada.
   area=areaRetang(b,h);
   diag=diagRetang(b,h);

   printf("O perimetro do ret�ngulo �: %d \n",peri);
   printf("A area do ret�ngulo �: %d\n", area);
   printf("A diagonal do ret�ngulo �: %.2f\n",diag);
   
	return 0;
}
