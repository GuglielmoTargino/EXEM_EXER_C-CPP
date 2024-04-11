

/*
exerc�ciode aula para exercitar a programa��o em fila.
*/



#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 2

typedef struct {
		int data[MAX_SIZE];
		int inicio;
		int fim;
} Fila;

// Fun��o para inicializar a fila
void iniciarFila(Fila *q) {
		q->inicio = -1;
		q->fim = -1;
}

// Fun��o para verificar se a fila est� vazia
int estaVazio(Fila *q) {
		if(q->inicio == -1) {
			return 1;
		}
		return 0;
}

// Fun��o para verificar se a fila est� cheia
int estaCheio(Fila *q) {
	// Calcula a pr�xima posi��o do fim
	int proximoFim = (q->fim + 1) % MAX_SIZE; 

	// Verifica se a pr�xima posi��o do fim � igual ao in�cio da fila
	if (proximoFim == q->inicio) {
			return 1; // Fila est� cheia
	} else {
			return 0; // Fila n�o est� cheia
	}
}

// Fun��o para adicionar um elemento � fila
void enqueue(Fila *q, int valor) {
		if (estaCheio(q)) {
				printf("Fila cheia. N�o � poss�vel adicionar elemento.\n");
			
		}
		if (estaVazio(q)) {
				q->inicio = 0;
		}
		q->fim = (q->fim + 1) % MAX_SIZE;
		q->data[q->fim] = valor;
}

// Fun��o para remover um elemento da fila
int dequeue(Fila *q) {
	if (estaVazio(q)) {
			printf("Fila vazia. N�o � poss�vel remover elemento.\n");
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

// Fun��o principal para testar a fila
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
