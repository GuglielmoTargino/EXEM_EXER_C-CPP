/*
Exercicio para se calcular a media de tr�s n�meros digitados
Aluno:Guglielmo Targino
Data:21dez23
vers�o: v0
*/


#include <iostream>
#include<iomanip> //defini��o necess�ria para usar as fun��es setw e setf.
#include <locale> //defini��o para caracteres acentuados

using namespace std;
int main(){
	std::locale::global(std::locale("")); //configura locale de acentua��o
	std::wcout.imbue(std::locale());		//configura a saida do locale
	
	
	float soma,prod,media,n1,n2,n3;
	
	cout<<"digite tr�s numeros_";
	cin>>n1>>n2>>n3;
	soma=n1+n2+n3;
	prod=n1*n2*n3;
	media=soma/3;
	
	cout<<"soma �_"<<soma<<endl;
	cout.setf(ios::fixed | ios::showpoint); // mostra reais em ponto flxo
	cout.precision(2);						//formata para 2 casas decimais
	
//setw(8) fixa tamanho da representa��o at� 8 digitos
	
	std::wcout <<"multiplica��o �_"<<(unsigned)prod<<endl;
	cout<<"media �_"<<media<<setw(8)<<endl;
	
	
}



