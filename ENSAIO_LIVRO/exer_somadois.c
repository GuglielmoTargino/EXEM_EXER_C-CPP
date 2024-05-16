#include <stdio.h>


int vetor[10]={1,2,3,4,5,6,7,8,9};
int i,j;
int alvo=5;


int main(void) {

 
   
  
  
   for(i=0;i<10;i++){
      for(j=0;j<10;j++){
    
      //transforma matriz em vetor
      if(vetor[i]+vetor[j]==alvo){
      	printf("numero_5 no vetor\n");
	  }else printf("numero_5 nao esta no vetor\n");
	   
	  }
    }
	  
  return 0;
}
