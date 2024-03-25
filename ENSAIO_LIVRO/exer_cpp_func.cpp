/*
exercício da apostila cpp

Aluno Gulielmo Targino
Data: 25/mar/24.
Versão: v0.

*/

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;


	
float salario(float sl){
	
		sl*=1.5;	
		return sl;
	}
	
float comissao(float cm){
	cm+=1.0212333;
	return cm;
}

int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	float cx,cs,total;
	

	cx=salario(10);
	cs=comissao(8);
	total=cx+cs;
	
	
	//cout.setf(ios::fixed|ios::showpoint);
	//cout.precision(2);
	//cout<<"\n a largura com 2 é: "<<total;
	
	cout<<fixed<<setprecision(4)<<"\n"<<total;
	
 //std::cout << std::fixed << std::setprecision(4) <<"\n" <<total << std::endl;
	
	
	
	
	
}


