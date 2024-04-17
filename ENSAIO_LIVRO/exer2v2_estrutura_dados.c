/*
  Exercício 2 parte 2 da disciplina de estrutura de dados.
  Verificar se é preciso ou não disponibilzar um 
  caixa a mais para o atendimento aos clientes numa fila de banco.
  Somente se o tempo nédio de atendimento ultrapassar 8 min. 
  
  
  Aluno: Guglielmo Hrntiques Targino.
  Data: 17abr24.
  Versão: v0.

*/
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	

	#define MAX_SIZE 100
	#define MAX_NAME_LENGTH 50
	
	
	// Cria uma estrutura simulando uma pessoa
typedef struct {
	char nome[MAX_NAME_LENGTH];
	int tempo;
	} Pessoa;
	
	
 	// Cria estrutura fila
typedef struct {		
    Pessoa data[MAX_SIZE];
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
    return (q->inicio == -1);
	}	


	// Função para verificar se a fila está cheia
int estaCheio(Fila *q) {
    // Calcula a próxima posição do fim
    int proximoFim = (q->fim + 1) % MAX_SIZE;
    
    // Verifica se a próxima posição do fim é igual ao início da fila
    return (proximoFim == q->inicio);
	}
	
   int st,m=0; // variaveis(status tempo_sr) e (média=m)
   // Função para adicionar uma pessoa à fila
void enqueue(Fila *q, const char *nome, int tempo) {  
	 
	 //cáculo da média de tempo gasto na fila.
   	 st+=tempo;
   	 m=st/5;
    
  
    if (estaCheio(q)) {
        printf("Fila cheia. Não é possível adicionar elemento.\n");
        return;
    }
    if (estaVazio(q)) {
        q->inicio = 0;
    }
    q->fim = (q->fim + 1) % MAX_SIZE;
    
    // Copia o nome para a estrutura Pessoa
    strncpy(q->data[q->fim].nome, nome, MAX_NAME_LENGTH - 1);
    
    // Garante que o nome seja terminado corretamente
    q->data[q->fim].nome[MAX_NAME_LENGTH - 1] = '\0'; 
    q->data[q->fim].tempo=tempo; 
    
	}


	// Função para remover uma pessoa da fila
Pessoa dequeue(Fila *q) {
    Pessoa pessoaVazia = {"", -1}; // Pessoa de retorno para indicar fila vazia

    if (estaVazio(q)) {
        printf("Fila vazia. Não é possível remover elemento.\n");
        return pessoaVazia;
    }

    Pessoa pessoaRemovida = q->data[q->inicio];
    if (q->inicio == q->fim) {
        q->inicio = -1;
        q->fim = -1;
    } else {
        q->inicio = (q->inicio + 1) % MAX_SIZE;
    }
    return pessoaRemovida;
	}

	// Função principal para testar a fila de pessoas
int main() {
   
    Fila fila;
    iniciarFila(&fila);

    enqueue(&fila, "Maria",10);    
    enqueue(&fila, "Paulo",8);
    enqueue(&fila, "Marcio",6);
    enqueue(&fila, "Flavia",3);
    enqueue(&fila, "Dara",5);
    
  
    Pessoa pessoa1 = dequeue(&fila);  
    Pessoa pessoa2 = dequeue(&fila);
    Pessoa pessoa3 = dequeue(&fila);
    Pessoa pessoa4 = dequeue(&fila);
    Pessoa pessoa5 = dequeue(&fila);
     

    printf("Removido da fila: %s, que gastou %d minutos.\n", pessoa1.nome, pessoa1.tempo);
    printf("Removido da fila: %s, que gastou %d minutos.\n", pessoa2.nome, pessoa2.tempo);
    printf("Removido da fila: %s, que gastou %d minutos.\n", pessoa3.nome, pessoa3.tempo);
    printf("Removido da fila: %s, que gastou %d minutos.\n", pessoa4.nome, pessoa4.tempo);
    printf("Removido da fila: %s, que gastou %d minutos.\n", pessoa5.nome, pessoa5.tempo);
    
    if(m>8){
    		printf("Tempo médio de atemdimento superior à 8 minutos. Necessário mais um caixa.");
    	
	} else 	printf("Tempo médio de atemdimento inferior à 8 minutos. Não é necessário mais um caixa.");
   
    return 0;
}

