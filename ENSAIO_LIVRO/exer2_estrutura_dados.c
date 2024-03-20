/*
Exercício 2 da disciplina estrutura de dados
 
 Aluno: Guglielmo Henriques Targino
 Data: 20mar24.
 Versão: v0.

*/

/*



*/

#include <stdio.h>
#include <locale.h>

void Quadrado(void){
  int a=10;
  int result=a*a;
  printf(" O valor de a=10 elevado ao quadrado é: %d\n", result);  
}

void Conver(void){

float pes=0.3048;
float cent=pes*100;
  printf(" 1 pés equivale à %.2f centimetros\n",cent);
  
}

void CobrarJuros(void){
  float valor=80;
  int tempo=10;
  float taxa=15;
  float prestacao;

  prestacao=(valor+(valor*(taxa/100))*tempo);
  
  printf("O valor da prestação atrasada é R$%.2f\n", prestacao);
  
}

void Ordenac(void){
	int n1,n2,n3;
	n1=100;
	n2=20;
	n3=3;
	
	if(n1>n2 && n1>n3){
		if(n2>n3){
			printf(" Ordem crescente é %d %d %d",n3,n2,n1);
		}else{
			printf(" Ordem crescente é %d %d %d",n2,n3,n1);
		}
	
	} 
	
	else if(n2>n1 && n2>n3){
		if(n1>n3){
  		    printf(" Ordem crescente é %d %d %d",n3,n1,n2);
		}else{
			printf(" Ordem crescente é %d %d %d",n1,n3,n2);
		}
		
	}else {
		  if(n3>n2 && n3>n1){
		  		if(n2>n1){
		    printf(" Ordem crescente é %d %d %d",n1,n2,n3);
		  	
		 	 }else{
		  	printf(" Ordem crescente é %d %d %d",n2,n1,n3);
		  }
		
		}
	}
	
	
	
}

void Diferir(){
	int n1, n2;
	
	n1=20;
	n2=10;
	if(n1>n2){
		printf(" A diferença entre %d e %d é %d \n",n1, n2, n1-n2);
	}else{
		printf(" A diferença entre %d  %d é %d \n",n2,n1, n2-n1);
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

  printf("a trocado é =%d, b trocado é =%d\n", a, b);
  
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf(" ========== Exercícios sequenciais –Questão1 ====\n");
	Quadrado();
	printf("\n");
	
	printf(" ========== Exercícios sequenciais –Questão2 ====\n");
	Conver();
	printf("\n");
	
	printf(" ========== Exercícios sequenciais –Questão3 ====\n");
	CobrarJuros();
	printf("\n");
	
	printf("Exercícios de estruturas condicionais –Questão1 \n");
	Ordenac();
	printf("\n");
	
	printf("Exercícios de estruturas condicionais –Questão2 \n");
	Diferir();
	printf("\n");
	
	
}
