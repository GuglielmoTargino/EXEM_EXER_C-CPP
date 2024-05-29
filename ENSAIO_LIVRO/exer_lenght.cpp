/*
Exercicio com funcao lenght()

Aluno:Guglielmo Targino.
Data: 17abr24.
versao: vo

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	
   string ght="guglielmo targino";
   char ch;
   
	int guga;
	//.length() conta quantos elementos a variável tem.
	int dara=ght.length();
	//cout<<dara;

	
	//sizeof só conta os bytes do tipo da variável.
	cout<<sizeof(ght[dara]);
	
	return 0;
	
}
