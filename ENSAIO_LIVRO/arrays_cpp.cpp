/*
Exercício com arrays da apostila cpp.
Aluno:Guglielmo Targino.
data: 13fev24.
Versão: v0.

*/

#include <iostream>
#include <iomanip>
#include <locale>

#define altura 10
#define largura 10

using namespace std;

int main (void){
	setlocale(LC_ALL,"Portuguese");
	int x,y;
	int matriz[altura][largura];
	
	for(y=0;y<altura;y+=1){
		for(x=0;x<largura;x+=1){
			matriz[y][x]=y*x;
		
		}
	
	}
	// imprime a matriz com zero e a coordenada escolhida
	
	cout<<"\n a tabela é _\n";
	
	cout<<setw(6)<<0;
	for (x=1;x<largura;x+=1){
		cout<<setw(3)<<x;
	//cout<<endl;
	cout<<"";
		
	}
	cout<<endl;
	
	for (x=0; x<3*largura;x+=1){
		cout<<"_";
		
	}
	
	cout<<endl;
	
	for(y=0;y<altura;y+=1){
		cout<<endl;
		cout <<setw(2)<<y<<"|";
		
		for(x=0;x<largura;x+=1){
			
			cout<<setw(3)<<matriz[y][x];
			//cout<<endl;
		}
	}
	

}
