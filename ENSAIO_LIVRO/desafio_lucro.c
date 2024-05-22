#include <stdio.h>

int arr[10] ={3,2,54,81,9,1,6};
int ind,maior,menor=0;

int Comprar(int vetor[]){

  for (ind = 0; ind < 7; ind++){
       
    if(vetor[ind]>maior){
      maior = vetor[ind];
      printf(" numeos %d\n",maior);
    }
      
    }
  }

int  Venda(int vetor[],int a){
  
  for (ind = 0; ind < 7; ind++){
    //if (vetor[ind] > vetor[ind+1]){

    if(vetor[ind]< a){
      menor = vetor[ind];
      printf(" numeos %d\n",menor);
    }

    }
}
    
    

  

int main(void) {

  Comprar(arr);
  printf(" numeos %d\n",maior);
  //Venda(arr,maior);
 
  
  return 0;
}
