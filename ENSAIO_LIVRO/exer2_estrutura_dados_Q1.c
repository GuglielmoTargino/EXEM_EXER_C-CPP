/* 
 Fun��es do exerc�cio 2 da disciplina estrutura de dados
 
 Aluno: Guglielmo Henriques Targino
 Data: 20mar24.
 Vers�o: v0.


*/

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

void Conver(void){

float pes=0.3048;
float cent=pes*100;
  printf("1 pes = %.2f centimetros\n",cent);

  
}

void cobrarJuros(void){
  float valor=80;
  int tempo=10;
  float taxa=15;
  float prestacao;

  prestacao=(valor+(valor*(taxa/100))*tempo);
  
  printf("valor da presta��o �: %.2f\n", prestacao);
  
}

void quadrado(void){

  int a=10;
  int result=a*a;
  printf("o quadrado de a �: %d\n", result);
  

  
}
