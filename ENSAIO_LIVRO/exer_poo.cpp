/*
Meu primeiro Exerc�cio POO 

Aluno: Guglielmo Targino.
Data: 26mar24.
Vers�o: v0.


*/

#include <iostream>
#include <string>
#include <locale>

using namespace std;

class Carro{
	
		private: string marca;
		private: string mod;
		private: int ano;
	

		//construtor
		public: Carro(string m, string md, int a){
			marca=m;
			mod=md;
			ano=a;
		}
		
		// metodo para exibir
	
 		public: void ExibirCarro(){
			cout<<"a marca � "<< marca<<endl;
			cout<<"o modelo � "<<mod<<endl;
			cout<<"o ano � "<<ano<<endl;
			
		}
			
};


int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	//objeto de carro
	Carro veiculo("fiat","brava",2000);
	
	veiculo.ExibirCarro();
	
}
