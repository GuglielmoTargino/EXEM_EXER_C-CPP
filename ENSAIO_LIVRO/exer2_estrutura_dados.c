/*
Resolu��o da atividade 2 da disciplina estrutura de dados.
 
 Aluno: Guglielmo Henriques Targino
 Data: 20mar24.
 Vers�o: v0.

*/


#include <stdio.h>
#include <locale.h> // biblioteca para caracteres acentuados.

//fun��o sequencial Q1.
void Quadrado(void){
  int a=10;
  int result=a*a;
  printf(" O valor de a=10 elevado ao quadrado �: %d\n", result);  
}

//fun��o sequencial Q2.
void Conver(void){

float pes=0.3048;
float cent=pes*100;
  printf(" 1 p�s equivale � %.2f centimetros\n",cent);
  
}

//fun��o sequencial Q3.
void CobrarJuros(void){
  float valor=80;
  int tempo=10;
  float taxa=15;
  float prestacao;

  prestacao=(valor+(valor*(taxa/100))*tempo);
  
  printf("O valor da presta��o atrasada � R$%.2f\n", prestacao);
  
}

//fun��o estrutura condicional Q1.
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

//fun��o estrutura condicional Q2.
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

//fun��o estrutura condicional Q3.
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

//fun��o estrutura repeti��o Q1.
void Somatoria(void){

  int contador=55;
  int a=0;
  while(contador <=155){
    a=contador+a;
    contador++;
   
  }
  printf("a somat�ria de 55 at� 155 �: %d\n",a);
  
}

//fun��o estrutura repeti��o Q2.
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

//fun��o estrutura repeti��o Q3.
void Impares(){
	 int a,soma;
	 float media;
	 soma=0;
	for (a=500;a>=1;a-=2){
		soma+=a;
		
	}
	media=(soma)/250;
	printf("A somat�ria dos impares entre 500 e 1 � %d\n",soma);
	printf("A m�dia da somat�ria � %0.2f\n",media);
	
}

//fun��o estrutura repeti��o Q4.
void Dividir(void){
	printf("O primeiro digito do RA � 2.\n");
	int a;
	
	for (a=498; a>=1; a-=2){
		printf("Os n�meros menores que 500 dis�veis por 2 s�o %d\n",a);
	}
  
}

//fun��o estrutura repeti��o Q5.
void Regredir(void){
	
	int x=10;
loop:
	printf("O valor regressivo de X � %d\n",x);
	x--;
	if(x>=0) goto loop;
}

//fun��o estrutura repeti��o Q6.
void RegredirWhile(){
	int a=10;
	do{
		printf("O valor regressivo de A � %d\n",a);
		a--;
	}while(a>=0);
}

//fun��o estrutura repeti��o Q7.
void RegredirImpar(){
	int a=9;
	while(a>=0){
		printf("O valor regressivo de B � %d\n", a);
		a-=2;
	}
}

//fun��o estrutura repeti��o Q8.
void Semana(){
	int dia=1;
	
	switch(dia){
		case 1:
			printf("Dia 1 � Domingo");
			break;
		case 2:
			printf("Dia 2 � Segunda-feira");
			break;
		case 3:
			printf("Dia 3 � Ter�a-feira");
			break;
		case 4:
			printf("Dia 4 � Quarta-feira");
			break;
		case 5:
			printf("Dia 5 � Quinta-feira");
			break;
		case 6:
			printf("Dia 6 � Sexta-feira");
			break;
		case 7:
			printf("Dia 7 � S�bado");
			break;
		default:
		printf("ERRO! Digite apenas de 1 at� 7.");
			
	} 
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
	
	printf("====Exercicio repeti��o �Quest�o1========== \n");
	Somatoria();
	printf("\n");
	
	printf("====Exercicio repeti��o �Quest�o2========== \n");
	Pares();
	printf("\n");
	
	printf("====Exercicio repeti��o �Quest�o3========== \n");
	Impares();
	printf("\n");
	
	printf("====Exercicio repeti��o �Quest�o4========== \n");
	Dividir();
	printf("\n");
	
	printf("====Exercicio repeti��o �Quest�o5========== \n");
	Regredir();
	printf("\n");
	
	printf("====Exercicio repeti��o �Quest�o6========== \n");
	RegredirWhile();
	printf("\n");
	
	printf("====Exercicio repeti��o �Quest�o7========== \n");
	RegredirImpar();
	printf("\n");
	
	printf("====Exercicio repeti��o �Quest�o8========== \n");
	Semana();
	printf("\n");
	
	
	
}
