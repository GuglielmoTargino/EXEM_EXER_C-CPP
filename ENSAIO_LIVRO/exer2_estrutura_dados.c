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
			printf(" Ordem crescente � %d %d %d",n3,n2,n1);
		}else{
			printf(" Ordem crescente � %d %d %d",n2,n3,n1);
		}
	
	} 
	
	else if(n2>n1 && n2>n3){
		if(n1>n3){
  		    printf(" Ordem crescente � %d %d %d",n3,n1,n2);
		}else{
			printf(" Ordem crescente � %d %d %d",n1,n3,n2);
		}
		
	}else {
		  if(n3>n2 && n3>n1){
		  		if(n2>n1){
		    printf(" Ordem crescente � %d %d %d",n1,n2,n3);
		  	
		 	 }else{
		  	printf(" Ordem crescente � %d %d %d",n2,n1,n3);
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
	
	printf("Exerc�cios de estruturas condicionais �Quest�o1 \n");
	Ordenac();
	printf("\n");
	
	printf("Exerc�cios de estruturas condicionais �Quest�o2 \n");
	Diferir();
	printf("\n");
	
	
}
