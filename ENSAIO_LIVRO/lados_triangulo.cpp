/*
Exemplo do livro CPP.
Aluno: Guglielmo Targimo.
Data: 03jan24.
Versão: v0


*/


#include <iostream>
#include <locale>

using namespace std;
int main (void){
	setlocale(LC_ALL,"Portuguese");
	
	int lado1,lado2,lado3;
	int s1,s2,s3;
	cout<<"digite três numeros_";
	cin>>lado1>>lado2>>lado3;
	 //calcula os quadrados dos lados.
	 
	 s1=lado1*lado1;
	 s2=lado2*lado2;
	 s3=lado3*lado3;
	 
	 //testa se a condição é um triangulo reto.
	 
	 if(lado1>0 && lado2>0 && lado3>0){
	 	if(s1==s2+s3 || s2==s1+s2 || s2==s1+s3){
	 		cout<< "triangulo reto\n";
		 }else{
		 	cout<<"Lados não formam triangulo reto\n";
		 }
	 }
	
}
