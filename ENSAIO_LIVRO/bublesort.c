#include <stdio.h>

int nt;
int i;
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
         printf("tamanho de size %d\n",size);
        printf("o ultimo é %d\n",arr[size-1]);
        
    }

    printf("o primeiro %d\n",arr[0]);
    
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    bubbleSort(arr, n);
    printf("Vetor ordenado: \n");
    imprimirVetor(arr, n);
    printf("Numero de trocas: %d\n", nt);
    return 0;
}

