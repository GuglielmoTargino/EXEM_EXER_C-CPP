/*
Exercício com função while.
Aluno: Guglielmo Targino.
Data: 08jan24.
Versão: v0.
*/

#include <iostream>

using namespace std;

int main(void){
	
	int linha,coluna;
	cout<<endl;
	linha=1;
	
	while (linha<8){
		cout<<"\t";
		coluna=1;
		while (coluna<linha){
			cout<<"*";
		coluna=coluna+1;
		}
		cout<<endl;
	linha=linha+1;
	}
	
}
