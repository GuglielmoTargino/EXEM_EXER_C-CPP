/*
Exerc�cio com fun��o while.
Aluno: Guglielmo Targino.
Data: 08jan24.
Vers�o: v0.
*/

#include <iostream>

using namespace std;

int main(void){
	
	int linha,coluna;
	cout<<endl;
	linha=1;
	
	while (linha<80){
		cout<<"\t";
		coluna=1;
		while (coluna<linha){
			cout<<"*";
		coluna++;
		}
		cout<<endl;
	linha++;
	}
	
}
