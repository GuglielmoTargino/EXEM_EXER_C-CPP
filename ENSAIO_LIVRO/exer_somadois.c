#include <stdio.h>


int vetor[]={1,2,3,4,5,6,7,8,9,13,8};
int i,j;
int alvo=11;
int tamanho;
    tamanho=sizeof(vetor)/sizeof(vetor[0]);


int main(void) {

 
   
  
  
   for(i=0;i<tamanho;i++){
	   j=0;
      for(j+=i;j<tamanho;j++){
    
      //transforma matriz em vetor
      if(vetor[i]+vetor[j]==alvo){
      	printf("numero_5 no vetor\n");
	  }else printf("numero_5 nao esta no vetor\n");
	   
	  }
    }
    
    printf("tamanho vetor é %d",tamanho);
	  
  return 0;
}
