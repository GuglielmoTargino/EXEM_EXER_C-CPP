/*
Exercício para se ordenar doi numeros.
Aluno: Guglielmo Targino
Data: 26dez23
Versão: v0

*/

#include <iostream>
#include <locale>

using namespace std;


int main(void){
	int num1,num2,aux;
	
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"digite dois números_"<<endl;
	cin>>num1>>num2;
	if(num1>num2){
		aux=num1;
		num1=num2;
		num2=aux;
		cout<<"Trocado 1 pelo 2_";
	}
	cout<<"os núumeros em ordem são_ "<<num1<<" e "<<num2<<endl;
	
}
