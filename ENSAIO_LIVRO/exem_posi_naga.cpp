/*
Exemplo da apostila de exerc�cios.
Exerc�cio para se verificar se um n�mero � positivo
ou negativo. e tamb�m se � par ou impar

*/

#include <iostream>
#include <locale>

using namespace std;

int main(void){
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	cout<<"digite um n�mero_"<<endl;
	cin>>num;
	if(num>=0){
		if(num%2==0){
			cout<<"n�mero positivo e par";
		}else cout<<"n�mero posito e impar";
		
	}else {
		if (num%2==0) {
			cout<<"numero negativo e par";
		}else 
			  cout<<"n�mero negativo e impar";
  		}
		
	
	
}

