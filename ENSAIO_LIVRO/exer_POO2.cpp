/*
Exerc�cio com POO
Aluno: Guglielmo Targino
Data: 28mar24.
Vers�o: v0
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
			cout<<"nome �:\n"<<name<<endl;
			cout<<"idade �:\n"<<idade<<endl;
		};
		
	
	
};



int main(void){
	
	Pessoa andrea("andrea",38);
	andrea.exibirPessoa();
	
	
	
}
