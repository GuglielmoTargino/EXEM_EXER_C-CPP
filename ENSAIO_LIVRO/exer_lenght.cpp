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
	//.length() conta quantos elementos a vari�vel tem.
	int dara=ght.length();
	//cout<<dara;

	
	//sizeof s� conta os bytes do tipo da vari�vel.
	cout<<sizeof(ght[dara]);
	
	return 0;
	
}
