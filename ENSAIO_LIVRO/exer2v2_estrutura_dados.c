/*
  Exercício 2 da disciplina de estrutura de dados.
  Verificar se é preciso ou não disponibilzar um 
  caixa a mais para o atendimento aos clientes numa fila de banco.
  Isso somente se o tempo de atendimento ultrapassar
  8 minutos de média.
  
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
	
   int sr=0;
   int se=5; // variaveis(status reclamação_sr) e (status elogio_se)
   // Função para adicionar uma pessoa à fila
void enqueue(Fila *q, const char *nome, int tempo) {  
	 
	 //contador de reclamação.
    if (tempo=='R'){
      sr+=1;     
    }
    
  
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

    enqueue(&fila, "Maria", 30);    
    enqueue(&fila, "Paulo", 20);
    enqueue(&fila, "Marcio", 40);
    enqueue(&fila, "Flavia", 36);
    enqueue(&fila, "Dara", 33);
    
  
    Pessoa pessoa1 = dequeue(&fila);  
    Pessoa pessoa2 = dequeue(&fila);
    Pessoa pessoa3 = dequeue(&fila);
    Pessoa pessoa4 = dequeue(&fila);
    Pessoa pessoa5 = dequeue(&fila);
     

    printf("Removido da fila: %s, %d tempo\n", pessoa1.nome, pessoa1.tempo);
    /*
   	printf("Removido da fila: %s, %d anos, CPF=%d, DT_NASC:%s MOTIVO:%c\n", pessoa2.nome, pessoa1.idade,pessoa2.cpf,pessoa2.dt_nasc,pessoa2.motivo);
   	printf("Removido da fila: %s, %d anos, CPF=%d, DT_NASC:%s MOTIVO:%c\n", pessoa3.nome, pessoa1.idade,pessoa3.cpf,pessoa3.dt_nasc,pessoa3.motivo);
   	printf("Removido da fila: %s, %d anos, CPF=%d, DT_NASC:%s MOTIVO:%c\n", pessoa4.nome, pessoa1.idade,pessoa1.cpf,pessoa4.dt_nasc,pessoa4.motivo);
   	printf("Removido da fila: %s, %d anos, CPF=%d, DT_NASC:%s MOTIVO:%c\n", pessoa5.nome, pessoa1.idade,pessoa5.cpf,pessoa5.dt_nasc,pessoa5.motivo);
 	
   	printf("Na fila de hoje, %d vieram reclamar e %d vieram elogiar",sr,se-sr);
   	*/
  
   
   
    return 0;
}

