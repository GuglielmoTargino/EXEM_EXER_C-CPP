/*
Este programa imprime o maior número digitado pelo usuario.
Autor: Guglielmo Targino.
Data: 27dez23.
Versão:v0
*/

#include <iostream>
#include <locale>

using namespace std;

int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	int num1,num2,num3,maior;
	cout<<"digite três números_"<<endl;
	
	cin>>num1>>num2>>num3;
	
	if(num1>num2){
		if(num1>num3)
		maior=num1;
	
	}else if(num2>num1){
		 if(num2>num3)
		  maior=num2;
	}else if(num3>num1){
		  if(num3>num2)
	  	maior=num3;
		   
	}
		 
	
	cout<<"maior número_"<<maior;


}
