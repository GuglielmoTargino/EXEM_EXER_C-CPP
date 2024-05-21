#include <stdio.h>
#include <stdlib.h> // Necess�rio para malloc e free

int main() {
    int tamanho;
    
    // Pergunta ao usu�rio o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    // Aloca mem�ria para o vetor
    int *vetor = (int*) malloc(tamanho * sizeof(int));
    
    // Verifica se a aloca��o foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        return 1; // Termina o programa com c�digo de erro
    }
    
    // Preenche o vetor com valores
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i * 2; // Exemplo de preenchimento: m�ltiplos de 2
    }
    
    // Imprime os valores do vetor
    printf("Valores no vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    // Libera a mem�ria alocada
    free(vetor);
    
    return 0; // Termina o programa com sucesso
}

