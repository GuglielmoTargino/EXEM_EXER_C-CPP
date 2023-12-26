/*
Exemplo da apostila de exercícios.
Exercício para se verificar se um número é positivo
ou negativo. e também se é par ou impar

*/

#include <iostream>
#include <locale>

using namespace std;

int main(void){
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	cout<<"digite um número_"<<endl;
	cin>>num;
	if(num>=0){
		if(num%2==0){
			cout<<"número positivo e par";
		}else cout<<"número posito e impar";
		
	}else {
		if (num%2==0) {
			cout<<"numero negativo e par";
		}else 
			  cout<<"número negativo e impar";
  		}
		
	
	
}

