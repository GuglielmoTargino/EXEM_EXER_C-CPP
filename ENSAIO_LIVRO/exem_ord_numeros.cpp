/*
Exerc�cio para se ordenar doi numeros.
Aluno: Guglielmo Targino
Data: 26dez23
Vers�o: v0

*/

#include <iostream>
#include <locale>

using namespace std;


int main(void){
	int num1,num2,aux;
	
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"digite dois n�meros_"<<endl;
	cin>>num1>>num2;
	if(num1>num2){
		aux=num1;
		num1=num2;
		num2=aux;
		cout<<"Trocado 1 pelo 2_";
	}
	cout<<"os n�umeros em ordem s�o_ "<<num1<<" e "<<num2<<endl;
	
}
