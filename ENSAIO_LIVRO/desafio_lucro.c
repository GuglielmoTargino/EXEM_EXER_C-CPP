/*
Exercício criado em sala de aula pelo professor Luis.

*/

#include <stdio.h>

int arr[] ={3,256,54,81,9,10,6,140,560};
int ind,a,dia,lucro=0;
int maior=0;//referência inicial maior valor
int menor=999;//referência inicial menor valor
int tamanho=sizeof(arr)/sizeof(arr[0]);

//Função para encontrar a melhor compra
int Comprar(int vetor[],int tamanho ){

  for (ind = 0; ind < tamanho; ind++){
       
    if(vetor[ind]<menor){
      menor=vetor[ind];
      dia=ind+1;      
    }
      
    }
    
  }
//Função para encontrar a melhor venda após a compra
int  Venda(int vetor[],int a,int tamanho){
  
  for (ind = a; ind < tamanho; ind++){    

    if(vetor[ind]>maior){
      maior = vetor[ind];
      dia=ind+1;      
    }

    }
    //retorna valor do lucro
    return maior-menor;
}

int main(void) {
	
	Comprar(arr,tamanho);//chama função comprar
    printf("Melhor compra R$%d.00. no dia %d\n",menor,dia);
  	lucro=Venda(arr,dia,tamanho);//chama função venda, retorna com 
  	//o lucro
    printf("Melhor venda R$%d.00, no dia %d\n",maior,dia);
    printf("Lucro de R$%d.00.\n",lucro);  
  
  return 0;
}
