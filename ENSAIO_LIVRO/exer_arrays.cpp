/*

Exeercpicio com arrays

Aluno:Guglielmo Targino.
Data: 03fev24.
Versão: v0.



*/


#include <iostream>

using namespace std;

	//função para trocar valor arrays
	void trocaR_v(int vet[]){
		vet[0]=60;
		vet[1]=70;
		vet[2]=80;
		
	}
	
	// função para trocar o valor de uma variável.
	
	void trocaR(int a){
		a=20;
	}
		
		
		

int main(){
	
	int v[]={30,40,50};
	char gh[2][3][2];
	gh[0][0][2]='Guga';
	
	
	trocaR(v[0]);
	
	cout<<"v[0]="<<v[0]<<endl;
	
	trocaR_v(v);
	cout<<"v[0]"<<v[0]<<"v[1]"<<v[1]<<"v[2"<<v[2]<<endl;
	cout<<" vetor gh[0][0[ é "<<gh[0][0][2];
	

	
}
