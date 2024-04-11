#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
#define max_lengh 50

typedef struct {
    int data[MAX_SIZE][max_lengh];
    int inicio;
    int fim;
} Fila;


// Função para inicializar a fila
void iniciarFila(Fila *q) {
    q->inicio = -1;
    q->fim = -1;
}

// Função para verificar se a fila está vazia
int estaVazio(Fila *q) {
    if(q->inicio == -1) {
      
      return 1;
    }
    return 0;
}

// Função para verificar se a fila está cheia
int estaCheio(Fila *q) {
  // Calcula a próxima posição do fim
  int proximoFim = (q->fim + 1) % MAX_SIZE; 

  // Verifica se a próxima posição do fim é igual ao início da fila
  if (proximoFim == q->inicio) {
      return 1; // Fila está cheia
  } else {
      return 0; // Fila não está cheia
  }
}

// Função para adicionar um elemento à fila
void enqueue(Fila *q, const char *valor) {
    if (estaCheio(q)) {
        printf("Fila cheia. Não é possível adicionar elemento.\n");
        return;
    }
    if (estaVazio(q)) {
        q->inicio = 0;
    }
    q->fim = (q->fim + 1) % MAX_SIZE;
  strncpy(q->data[q->fim].valor,max_lengh-1);
    q->data[q->fim][max_lengh-1] = '\0';
}

// Função para remover um elemento da fila
char *dequeue(Fila *q) {
  if (estaVazio(q)) {
      printf("Fila vazia. Não é possível remover elemento.\n");
      return NULL;
  }

  char *valor = q->data[q->inicio];
  if (q->inicio == q->fim) {
      q->inicio = -1;
      q->fim = -1;
  } else {
      q->inicio = (q->inicio + 1) % MAX_SIZE;
  }
  return valor;
}

// Função principal para testar a fila
int main() {
    Fila fila;
    iniciarFila(&fila);

    enqueue(&fila, "João");
    enqueue(&fila,"Paula");
    enqueue(&fila, "Pedro");

    printf("Removido da fila: %d\n", dequeue(&fila));
    printf("Removido da fila: %d\n", dequeue(&fila));
    printf("Removido da fila: %d\n", dequeue(&fila));
    printf("Removido da fila: %d\n", dequeue(&fila));		
    return 0;
}
