

/*
exercíciode aula para exercitar a programação em fila.
*/



#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 2

typedef struct {
		int data[MAX_SIZE];
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
void enqueue(Fila *q, int valor) {
		if (estaCheio(q)) {
				printf("Fila cheia. Não é possível adicionar elemento.\n");
			
		}
		if (estaVazio(q)) {
				q->inicio = 0;
		}
		q->fim = (q->fim + 1) % MAX_SIZE;
		q->data[q->fim] = valor;
}

// Função para remover um elemento da fila
int dequeue(Fila *q) {
	if (estaVazio(q)) {
			printf("Fila vazia. Não é possível remover elemento.\n");
			return -1;
	}

	int valor = q->data[q->inicio];
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

		enqueue(&fila, 190);
		dequeue(&fila);
		
		
		printf("Removido da fila: %d\n", dequeue(&fila));
		
		/*
		
		
		
enqueue(&fila, 20);
		enqueue(&fila, 30);
	
	printf("Removido da fila: %d\n", dequeue(&fila));
	
		printf("Removido da fila: %d\n", dequeue(&fila));
		*/		
		return 0;
}
