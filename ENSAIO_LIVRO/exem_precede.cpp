/*
Exercicio da apostila de cpp
Aluno: Guglielmo Targino
Data: 22dez23
Versão:v0


*/

#include <iostream>
#include<locale>

using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n1,n2;
	int qdado;
	cout<<"digite dois números_"<<endl;
	cin>>n1>>n2;
	qdado=n1*n2+2;
	
	cout<<" o quadrado de n é_"<<qdado<<endl;
	
}
