
/* exercicio do livro variavel global*/

#include <stdio.h>

int count;
void func1(void);
void func2(void);

 void main(void){
 	count=10;
 	func1(); 	
 }
 
 void func1(void){
 	int temp; 
 	
 	temp=count; /* temp aqui serve só para exemplificar a referencia a count*/
 	func2();
 	printf(" aqui comeca func1_count é %d",count); /* imprimirá 100 vezes*/
 	
 }
 
 void func2(void){
 	int count; /* conut aqiu está se recebendo o valor da count declarada globalmente*/
 	for (count=0;count<10;count++)
 	putchar('g');
 }
 



