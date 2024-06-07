//Exercício com ordenador buble
//Aluno: Guglielmo Targino.
//Data:06jun24
//Versão:v0.

#include <stdio.h>
#include <locale.h>

int nt;
int i,vc;
//,vc,soma;
vc=60;
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                nt++;
            }
        }
    }
}


void imprimirVetor(int arr[], int size) {
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
         
        
        
    }

    printf("\no primeiro é %d\n",arr[0]);
    printf("o ultimo é %d\n",arr[size-1]);
    
}
void fazerCompra(int vetor[],int vc,int n){
	int soma=0;
	for(i=0;i<n-1;i++){
		if(soma<vc){
			soma+=vetor[i];
			
			if(soma>vc){
				soma-=vetor[i];
				soma+=vetor[0];
				printf("valor total é %d \n",soma);
		
			}
			
			}	
	}
	
	
}

int main() {
	setlocale(LC_ALL,"Portuguese");
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    bubbleSort(arr, n);
    printf("Vetor ordenado: \n");
    imprimirVetor(arr, n);
    printf("Numero de trocas: %d\n", nt);
    fazerCompra(arr,vc,n);
    return 0;
}

