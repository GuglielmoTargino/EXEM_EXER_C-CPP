/*
Exerc�cio com POO
Aluno: Guglielmo Targino
Data: 28mar24.
Vers�o: v0
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
			cout<<"O nome da dona �:"<<name<<endl;
			cout<<" A idade �:"<<idade<<endl;
		};	
	
};

class Pet{
	
	private: string nome;
	private: string tipo;
	
	
	public: Pet(string n, string t){
		nome=n;
		tipo=t;		
	}
	
	public: void mostrarPet(){
		cout<<"O pet dela �: "<<nome<<endl;
		cout<<" do tipo "<<tipo;
	}
	
};



int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	Pessoa user1("Andrea",38);
	user1.exibirPessoa();
	
	Pet gato("Lic","Gato");
	gato.mostrarPet();	
		
	
}
