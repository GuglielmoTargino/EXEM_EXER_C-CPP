/*
Exerc�cio de comprimento de uma matriz.
Aluno:Guglielmo Targino.
data: 05jun24.
Vers�o: v0.

*/

#include <iostream>
#include <locale>

#define altura 5
#define largura 10

using namespace std;

int tamanho;

int main (void){
	setlocale(LC_ALL,"Portuguese");
	int matriz[altura][largura];
	tamanho=sizeof(matriz)/sizeof(matriz[0]);
	
	cout<<tamanho;

}
