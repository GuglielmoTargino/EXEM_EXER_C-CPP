/*
Exercício criado em sala de aula pelo professor Luis.

*/

#include <stdio.h>

int arr[10] ={3,256,54,81,9,1,6};
int ind,a,dia,dia2=0;
int maior=0;
int menor=999;


int Comprar(int vetor[]){

  for (ind = 0; ind < 7; ind++){
       
    if(vetor[ind]<menor){
      menor=vetor[ind];
      dia=ind;      
    }
      
    }
    return menor;
  }

int  Venda(int vetor[],int a){
  
  for (ind = 0; ind < 7; ind++){
    

    if(vetor[ind]>maior){
      maior = vetor[ind];
      dia2=(ind+a);
      
    }

    }
    
    return maior;
}
    
    

  

int main(void) {
	Comprar(arr);
	Venda(arr,dia);
  printf(" Melhor compra R$%d, dia %d\n",menor,dia);
  printf(" melhor venda R$%d, dia %d\n",maior,dia2);
  
  
  
  return 0;
}
