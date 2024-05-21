#include <stdio.h>
#include <stdlib.h> // Necessário para malloc e free

int main() {
    int tamanho;
    
    // Pergunta ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    // Aloca memória para o vetor
    int *vetor = (int*) malloc(tamanho * sizeof(int));
    
    // Verifica se a alocação foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; // Termina o programa com código de erro
    }
    
    // Preenche o vetor com valores
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i * 2; // Exemplo de preenchimento: múltiplos de 2
    }
    
    // Imprime os valores do vetor
    printf("Valores no vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    // Libera a memória alocada
    free(vetor);
    
    return 0; // Termina o programa com sucesso
}

