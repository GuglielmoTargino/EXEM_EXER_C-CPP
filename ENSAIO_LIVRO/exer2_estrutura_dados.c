/*
Exerc�cio 2 da disciplina estrutura de dados
 
 Aluno: Guglielmo Henriques Targino
 Data: 20mar24.
 Vers�o: v0.

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
	
	printf(" ========== Exerc�cios sequenciais �Quest�o2 ====\n");
	
	Conver();
}
