/*

Exeercpicio com arrays

Aluno:Guglielmo Targino.
Data: 03fev24.
Vers�o: v0.



*/


#include <iostream>

using namespace std;

	//fun��o para trocar valor arrays
	void trocaR_v(int ver[]){
		vet[0]=60;
		vet[1]=70;
		vet[2]=80;
		
	}
	
	// fun��o para trocar o valor de uma vari�vel.
	
	void trocaR(int a){
		a=20;
	}
		
		
		

int main(){
	
	int v[]={30,40,50};
	
	trocaR(v[0]);
	
	cout<<"v[0]="<<v[0]<<endl;
	
	trocaR_v(v);
	cout<<"v[0]"<<v[0]<<"v[1]"<<v[1]<<"v[2"<<v[2]<<endl;
	

	
}
