/*
Exercício com POO
Aluno: Guglielmo Targino
Data: 28mar24.
Versão: v0
*/

#include <iostream>
#include <string>
using namespace std;

class Pessoa{
	private:
	 string name;
	 int idade;
	 
	 
	 public:
		Pessoa(string nome, int dade){
	 		name=nome;
	 		idade=dade;	 		
	 		
		 }
	 public:
		void exibirPessoa(){
			cout<<"nome é:\n"<<name<<endl;
			cout<<"idade é:\n"<<idade<<endl;
		};
		
	
	
};



int main(void){
	
	Pessoa andrea("andrea",38);
	andrea.exibirPessoa();
	
	
	
}
