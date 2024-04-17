/*
  Exercício 2 da disciplina de estrutura de dados.
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
	int idade;
    int cpf;
    char dt_nasc[9];
    char motivo;
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



	// Função para adicionar uma pessoa à fila
   int sr=0;
void enqueue(Fila *q, const char *nome, int idade, int cpf, const char *dt, char mot) {  

    if (mot=='R'){
      sr+=1;     
    }
   printf("De 5 pessoas na fila %d vieram reclamar\n",sr);   
  
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
    strncpy(q->data[q->fim].dt_nasc, dt,10);
    // Garante que o nome seja terminado corretamente
    q->data[q->fim].nome[MAX_NAME_LENGTH - 1] = '\0'; 
    q->data[q->fim].idade = idade;
    q->data[q->fim].cpf = cpf;
    q->data[q->fim].dt_nasc [9-1]= '\0';
    
    //q->data[q->fim].dt_nasc = dt;
    q->data[q->fim].motivo = mot;  
    
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
   // OBS: R para ewclamacao, E para elogiar.

    enqueue(&fila, "Maria", 30, 027, "ght", 'R');
    /*
    enqueue(&fila, "Paulo", 20,'g','k','R');
    enqueue(&fila, "Marcio", 40,'g','k','R');
    enqueue(&fila, "Flavia", 36,'g','k','R');
    enqueue(&fila, "Dara", 33,'g','k','R');
    */
    
    
  	/*
    enqueue(&fila, "Joao", 25);
    enqueue(&fila, "Paulo", 35);
     enqueue(&fila, "Dara", 35);
     enqueue(&fila, "Julio", 35);
     */
  
    Pessoa pessoa1 = dequeue(&fila);  
    Pessoa pessoa2 = dequeue(&fila);
    Pessoa pessoa3 = dequeue(&fila);
    Pessoa pessoa4 = dequeue(&fila);
    Pessoa pessoa5 = dequeue(&fila);
     

    printf("Removido da fila: %s, %d anos CPF= %d DT_NASC=%s MOTIVO= %c\n", pessoa1.nome, pessoa1.idade,pessoa1.cpf,pessoa1.dt_nasc,pessoa1.motivo);
   	printf("Removido da fila: %s, %d anos CPF= %c DT_NASC= %c MOTIVO= %c\n", pessoa2.nome, pessoa1.idade,pessoa2.cpf,pessoa2.dt_nasc,pessoa2.motivo);
   	printf("Removido da fila: %s, %d anos CPF= %c DT_NASC= %c MOTIVO= %c\n", pessoa3.nome, pessoa1.idade,pessoa3.cpf,pessoa3.dt_nasc,pessoa3.motivo);
   	printf("Removido da fila: %s, %d anos CPF= %c DT_NASC= %c MOTIVO= %c\n", pessoa4.nome, pessoa1.idade,pessoa1.cpf,pessoa4.dt_nasc,pessoa4.motivo);
   	printf("Removido da fila: %s, %d anos CPF= %c DT_NASC= %c MOTIVO= %c\n", pessoa5.nome, pessoa1.idade,pessoa5.cpf,pessoa5.dt_nasc,pessoa5.motivo);
 
  
   
    /*printf("Removido da fila: %s, %d anos\n", pessoa2.nome, pessoa2.idade);
    printf("Removido da fila: %s, %d anos\n", pessoa3.nome, pessoa3.idade);
   printf("Removido da fila: %s, %d anos\n", pessoa4.nome, pessoa3.idade);
   printf("Removido da fila: %s, %d anos\n", pessoa5.nome, pessoa3.idade);*/
    return 0;
}

