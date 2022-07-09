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
   
   printf("Calculando as dimensões do retângulo\n");
   printf("**********************************\n");
   
   printf("Digite o valor da base do retângulo: \n");
   scanf("%d",&b);
   
   printf("Digite o valor da altura do retângulo\n");
   scanf("%d",&h);
   
   peri= perimetroRetang(b,h);// É aqui que a função é chamada.
   area=areaRetang(b,h);
   diag=diagRetang(b,h);

   printf("O perimetro do retângulo é: %d \n",peri);
   printf("A area do retângulo é: %d\n", area);
   printf("A diagonal do retângulo é: %.2f\n",diag);
   
	return 0;
}
