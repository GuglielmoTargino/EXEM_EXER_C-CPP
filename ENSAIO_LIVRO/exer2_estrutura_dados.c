/*
Exerc�cio 2 da disciplina estrutura de dados
 
 Aluno: Guglielmo Henriques Targino
 Data: 20mar24.
 Vers�o: v0.

*/

/*



*/

#include <stdio.h>
#include <locale.h>

void Quadrado(void){
  int a=10;
  int result=a*a;
  printf(" O valor de a=10 elevado ao quadrado �: %d\n", result);  
}

void Conver(void){

float pes=0.3048;
float cent=pes*100;
  printf(" 1 p�s equivale � %.2f centimetros\n",cent);
  
}

void CobrarJuros(void){
  float valor=80;
  int tempo=10;
  float taxa=15;
  float prestacao;

  prestacao=(valor+(valor*(taxa/100))*tempo);
  
  printf("O valor da presta��o atrasada � R$%.2f\n", prestacao);
  
}

void Ordenac(void){
	int n1,n2,n3;
	n1=100;
	n2=20;
	n3=3;
	
	if(n1>n2 && n1>n3){
		if(n2>n3){
			printf(" Ordem crescente � %d %d %d\n",n3,n2,n1);
		}else{
			printf(" Ordem crescente � %d %d %d\n",n2,n3,n1);
		}
	
	} 
	
	else if(n2>n1 && n2>n3){
		if(n1>n3){
  		    printf(" Ordem crescente � %d %d %d\n",n3,n1,n2);
		}else{
			printf(" Ordem crescente � %d %d %d\n",n1,n3,n2);
		}
		
	}else {
		  if(n3>n2 && n3>n1){
		  		if(n2>n1){
		    printf(" Ordem crescente � %d %d %d\n",n1,n2,n3);
		  	
		 	 }else{
		  	printf(" Ordem crescente � %d %d %d\n",n2,n1,n3);
		  }
		
		}
	}
	
	
	
}

void Diferir(){
	int n1, n2;
	
	n1=20;
	n2=10;
	if(n1>n2){
		printf(" A diferen�a entre %d e %d � %d \n",n1, n2, n1-n2);
	}else{
		printf(" A diferen�a entre %d  %d � %d \n",n2,n1, n2-n1);
	}
}

void Resultado(void){

  int a=5;
  int b=5;
  int c=4;
  int d=4;
  float media=(a+b+c+d)/4;
  if(media>=7){
    printf("Aluno foi aprovado: %.2f\n",media);
  }else if (media>=5 && media<7){
    printf("Fazer exame : %.2f\n",media);
  }else printf( "Aluno reprovado: %.2f\n",media);
}

void Somatoria(void){

  int contador=55;
  int a=0;
  while(contador <=155){
    a=contador+a;
    contador++;
   
  }
  printf("a somat�ria de 55 at� 155 �: %d\n",a);
  
}

void Pares(){
	 int a,soma;
	 float media;
	 soma=0;
	for (a=50;a<=5000;a+=2){
		soma+=a;
		
	}
	media=(soma)/2475;
	printf("A somat�ria dos pares entre 50 e 5000 � %d\n",soma);
	printf("A m�dia da somat�ria � %0.2f\n",media);
	
}
void Trocar(void){

  int a=10;
  int b=20;
  int aux;
  printf("a=%d, b=%d\n", a, b);
  
  aux = a;
  a = b;
  b = aux;

  printf("a trocado � =%d, b trocado � =%d\n", a, b);
  
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf(" ========== Exerc�cios sequenciais �Quest�o1 ====\n");
	Quadrado();
	printf("\n");
	
	printf(" ========== Exerc�cios sequenciais �Quest�o2 ====\n");
	Conver();
	printf("\n");
	
	printf(" ========== Exerc�cios sequenciais �Quest�o3 ====\n");
	CobrarJuros();
	printf("\n");
	
	printf("========Exerc�cios condicionais �Quest�o1======== \n");
	Ordenac();
	printf("\n");
	
	printf("========Exercicio condicionais �Quest�o2========== \n");
	Diferir();
	printf("\n");
	
	printf("========Exercicio condicionais �Quest�o3========== \n");
	Resultado();
	printf("\n");
	
	printf("========Exercicio repeti��o �Quest�o1========== \n");
	Somatoria();
	printf("\n");
	
	printf("====Exercicio repeti��o �Quest�o2========== \n");
	Pares();
	printf("\n");
	
	
	
	
}
