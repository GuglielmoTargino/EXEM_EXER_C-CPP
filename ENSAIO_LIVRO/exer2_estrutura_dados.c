/*
Exercício 2 da disciplina estrutura de dados
 
 Aluno: Guglielmo Henriques Targino
 Data: 20mar24.
 Versão: v0.

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
	
	printf(" ========== Exercícios sequenciais –Questão2 ====\n");
	
	Conver();
}
