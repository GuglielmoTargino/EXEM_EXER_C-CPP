/*
Exemplo da apostila cpp
Aluno: Guglielmo Targino
Data: 22dez23
Versão:v0

*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	cout.setf(ios::fixed|ios::showpoint);
	cout.precision(3);
	setlocale(LC_ALL,"Portuguese");
	float nme,den;
	float resu=1;
	while(resu!=0){
		cout<<"digite o numerador e depois o denominador"<<endl;
		cin>>nme>>den;
		if(den==0)
       	cout<<"denominador não pode ser zero. Tente outra vez";
       
       else {
    	resu=nme/den;
    	cout<<"o resultado da fração é_"<<resu<<endl;
	}
	}
	
	
}
