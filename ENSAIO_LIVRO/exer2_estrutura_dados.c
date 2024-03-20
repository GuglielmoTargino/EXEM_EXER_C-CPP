/*
Resolução da atividade 2 da disciplina estrutura de dados.
 
 Aluno: Guglielmo Henriques Targino
 Data: 20mar24.
 Versão: v0.

*/


#include <stdio.h>
#include <locale.h> // biblioteca para caracteres acentuados.

//função sequencial Q1.
void Quadrado(void){
  int a=10;
  int result=a*a;
  printf(" O valor de a=10 elevado ao quadrado é: %d\n", result);  
}

//função sequencial Q2.
void Conver(void){

float pes=0.3048;
float cent=pes*100;
  printf(" 1 pés equivale à %.2f centimetros\n",cent);
  
}

//função sequencial Q3.
void CobrarJuros(void){
  float valor=80;
  int tempo=10;
  float taxa=15;
  float prestacao;

  prestacao=(valor+(valor*(taxa/100))*tempo);
  
  printf("O valor da prestação atrasada é R$%.2f\n", prestacao);
  
}

//função estrutura condicional Q1.
void Ordenac(void){
	int n1,n2,n3;
	n1=100;
	n2=20;
	n3=3;
	
	if(n1>n2 && n1>n3){
		if(n2>n3){
			printf(" Ordem crescente é %d %d %d\n",n3,n2,n1);
		}else{
			printf(" Ordem crescente é %d %d %d\n",n2,n3,n1);
		}
	
	} 
	
	else if(n2>n1 && n2>n3){
		if(n1>n3){
  		    printf(" Ordem crescente é %d %d %d\n",n3,n1,n2);
		}else{
			printf(" Ordem crescente é %d %d %d\n",n1,n3,n2);
		}
		
	}else {
		  if(n3>n2 && n3>n1){
		  		if(n2>n1){
		    printf(" Ordem crescente é %d %d %d\n",n1,n2,n3);
		  	
		 	 }else{
		  	printf(" Ordem crescente é %d %d %d\n",n2,n1,n3);
		  }
		
		}
	}
	
	
	
}

//função estrutura condicional Q2.
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

//função estrutura condicional Q3.
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

//função estrutura repetição Q1.
void Somatoria(void){

  int contador=55;
  int a=0;
  while(contador <=155){
    a=contador+a;
    contador++;
   
  }
  printf("a somatória de 55 até 155 é: %d\n",a);
  
}

//função estrutura repetição Q2.
void Pares(){
	 int a,soma;
	 float media;
	 soma=0;
	for (a=50;a<=5000;a+=2){
		soma+=a;
		
	}
	media=(soma)/2475;
	printf("A somatória dos pares entre 50 e 5000 é %d\n",soma);
	printf("A média da somatória é %0.2f\n",media);
	
}

//função estrutura repetição Q3.
void Impares(){
	 int a,soma;
	 float media;
	 soma=0;
	for (a=500;a>=1;a-=2){
		soma+=a;
		
	}
	media=(soma)/250;
	printf("A somatória dos impares entre 500 e 1 é %d\n",soma);
	printf("A média da somatória é %0.2f\n",media);
	
}

//função estrutura repetição Q4.
void Dividir(void){
	printf("O primeiro digito do RA é 2.\n");
	int a;
	
	for (a=498; a>=1; a-=2){
		printf("Os números menores que 500 disíveis por 2 são %d\n",a);
	}
  
}

//função estrutura repetição Q5.
void Regredir(void){
	
	int x=10;
loop:
	printf("O valor regressivo de X é %d\n",x);
	x--;
	if(x>=0) goto loop;
}

//função estrutura repetição Q6.
void RegredirWhile(){
	int a=10;
	do{
		printf("O valor regressivo de A é %d\n",a);
		a--;
	}while(a>=0);
}

//função estrutura repetição Q7.
void RegredirImpar(){
	int a=9;
	while(a>=0){
		printf("O valor regressivo de B é %d\n", a);
		a-=2;
	}
}

//função estrutura repetição Q8.
void Semana(){
	int dia=1;
	
	switch(dia){
		case 1:
			printf("Dia 1 é Domingo");
			break;
		case 2:
			printf("Dia 2 é Segunda-feira");
			break;
		case 3:
			printf("Dia 3 é Terça-feira");
			break;
		case 4:
			printf("Dia 4 é Quarta-feira");
			break;
		case 5:
			printf("Dia 5 é Quinta-feira");
			break;
		case 6:
			printf("Dia 6 é Sexta-feira");
			break;
		case 7:
			printf("Dia 7 é Sábado");
			break;
		default:
		printf("ERRO! Digite apenas de 1 até 7.");
			
	} 
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
	
	printf("========Exercícios condicionais –Questão1======== \n");
	Ordenac();
	printf("\n");
	
	printf("========Exercicio condicionais –Questão2========== \n");
	Diferir();
	printf("\n");
	
	printf("========Exercicio condicionais –Questão3========== \n");
	Resultado();
	printf("\n");
	
	printf("====Exercicio repetição –Questão1========== \n");
	Somatoria();
	printf("\n");
	
	printf("====Exercicio repetição –Questão2========== \n");
	Pares();
	printf("\n");
	
	printf("====Exercicio repetição –Questão3========== \n");
	Impares();
	printf("\n");
	
	printf("====Exercicio repetição –Questão4========== \n");
	Dividir();
	printf("\n");
	
	printf("====Exercicio repetição –Questão5========== \n");
	Regredir();
	printf("\n");
	
	printf("====Exercicio repetição –Questão6========== \n");
	RegredirWhile();
	printf("\n");
	
	printf("====Exercicio repetição –Questão7========== \n");
	RegredirImpar();
	printf("\n");
	
	printf("====Exercicio repetição –Questão8========== \n");
	Semana();
	printf("\n");
	
	
	
}
