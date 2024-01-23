/*
exercício do livro c++.
Aluno: Guglielmo Targino.
Data: 22jan24
Versão:v0.



*/

#include <iostream>
#include <locale>


using namespace std;

void cumprimentar(char inic, char inic2){
	cout<<"Olá"<<inic2<<"!"<<endl;
	
}

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	char primeiro,segundo;
	cout<<"digite duas iniciais";
	cin>>primeiro>>segundo;
	cumprimentar(primeiro,segundo);
	
	
	
}
