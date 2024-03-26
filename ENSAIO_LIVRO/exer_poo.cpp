/*
Meu primeiro Exercício POO 

Aluno: Guglielmo Targino.
Data: 26mar24.
Versão: v0.


*/

#include <iostream>
#include <string>

using namespace std;

class Carro{
	private:
	string marca;
	string mod;
	int ano;
	
	public:
		//construtor
		Carro(string m, string md, int a){
			marca=m;
			mod=md;
			ano=a;
		}
		
		// metodo para exibir
		void ExibirCarro(){
			cout<<"marca"<< marca<<endl;
			cout<<"modelo"<<mod<<endl;
			cout<<"ano"<<ano<<endl;
			
		}
			
};


int main(void){
	
	//objeto de carro
	Carro veiculo("fiat","brava",200);
	
	veiculo.ExibirCarro();
	
}
