/*
Exercicio para se calcular a media de três números digitados
Aluno:Guglielmo Targino
Data:21dez23
versão: v0
*/


#include <iostream>
#include<iomanip> //definição necessária para usar as funções setw e setf.
#include <locale> //definição para caracteres acentuados

using namespace std;
int main(){
	std::locale::global(std::locale("")); //configura locale de acentuação
	std::wcout.imbue(std::locale());		//configura a saida do locale
	
	
	float soma,prod,media,n1,n2,n3;
	
	cout<<"digite três numeros_";
	cin>>n1>>n2>>n3;
	soma=n1+n2+n3;
	prod=n1*n2*n3;
	media=soma/3;
	
	cout<<"soma é_"<<soma<<endl;
	cout.setf(ios::fixed | ios::showpoint); // mostra reais em ponto flxo
	cout.precision(2);						//formata para 2 casas decimais
	
//setw(8) fixa tamanho da representação até 8 digitos
	
	std::wcout <<"multiplicação é_"<<(unsigned)prod<<endl;
	cout<<"media é_"<<media<<setw(8)<<endl;
	
	
}



