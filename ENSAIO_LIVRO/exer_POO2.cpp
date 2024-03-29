/*
Exercício com POO
Aluno: Guglielmo Targino
Data: 28mar24.
Versão: v0
*/

#include <iostream>
#include <string>
#include <locale>
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
	
	 
		void exibirPessoa(){
			cout<<"nome é:\n"<<name<<endl;
			cout<<"idade é:\n"<<idade<<endl;
		};	
	
};

class Pet{
	sting nome;
	string tipo;
	
	
	Pet(string n, string t){
		nome=n;
		tipo=t;		
	}
	
	mostrarPet(){
		cout<<"O pet é: "<<nome;
		cout<<" a raça é "<<tipo;
	}
	
};



int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	Pessoa user1("andrea",38);
	user1.exibirPessoa();
	
	Pet gato("Lic","Gato");
	

	
		
	
}
