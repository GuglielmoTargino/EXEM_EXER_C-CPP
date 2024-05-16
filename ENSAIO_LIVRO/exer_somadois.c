#include <stdio.h>

int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int vetor[10];
int i,j,indice=0;
int alvo=5;


int main(void) {

 
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
    
      //transforma matriz em vetor
      vetor[indice]=matriz[i][j];
    
       printf("valor vetor_matriz %d\n",vetor[indice]);
    indice++;
    }
  }
   

  return 0;
}
