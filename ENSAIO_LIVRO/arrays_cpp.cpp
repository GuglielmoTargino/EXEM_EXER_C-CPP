/*
Exercício com arrays da apostila cpp.
Aluno:Guglielmo Targino.
data: 13fev24.
Versão: v0.

*/

#define <iostream>

#define altura 5
#define largura 5

using namespace std;

int main (void){
	
	int x,y;
	char matriz[altura][largur];
	
	for(y=0;y<altura;y+=1){
		for(x=0x<largura;x+=1){
			matriz[y][x]=0;
		}
	}
	// imprime a matriz com zero e a coordenada escolhida
	
	cout<<endl<<"digite as coordenadas \"y x\" ."<<endl;
	cout<<"use valores negativos para sair do programa."<<endl;
	cout << "coodenadas";
	cin>>y>>x;
	
	while (x>=0 && y>=0){
		matriz [y][x]=1;
		for(y=0; y<altura;y+=1){
			for(x=0;x<largura;x+=1){
				cout <<matriz[y][x]<<" ";
			}
			cout <<endl;
			cout <<"coordenadas";
			cin>>y>>x;
			
		}
	}
	
}
