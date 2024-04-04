/*
Treino exercício com matriz bidimensional
Aluno: Guglielmo Targino.
Data: 04abr24.
versão: v0
*/

#include <iostream>
#include <locale>

using namespace std;


int main(){
	setlocale(LC_ALL,"Portuguese");
	
 int mtz[2][3]={{2,3,8},
 	 		    {1,6,7}
				  
};
 int i,j,g;
 
  for (i=0;i<2;i++){
  	for(j=0;j<3;j++){
  		
  		//cout<<"matriz [0][0] é \n_"<<mtz[i][j]<<endl;
  		printf("Matriz [%d][%d] é %d \n",i,j,mtz[i][j]);
  		  		
	  };
  	 
  };
  
   scanf("%d",&g);
   	printf("vc digitou %d\n",g);
	
	
	
	return 0;
}
