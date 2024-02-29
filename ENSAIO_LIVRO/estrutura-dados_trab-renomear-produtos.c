/*
Trabalho de aula Estruturas de Dados.
O objetivo deste trabalho é implementar as funções 
de excluir, alterar e renomear os itens já propostos.

Aluno: Guglielmo Targino.
Data:29fev24
Versão:v0.

*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
#define MAX_ITENS 5
#define sim 1
#define nao 0

static int contador = 0;

typedef struct {
  int codigo;
  char descricao[MAX_SIZE];
  float valorTotal;
  int quantidadeItens;
  bool achouCaro;
} Item;

void cadastrarItem(Item *item, int codigo, const char *descricao,
                   float valorTotal, int quantidadeItens, bool achouCaro) {
  item->codigo = codigo;
  strcpy(item->descricao, descricao);
  item->valorTotal = valorTotal;
  item->quantidadeItens = quantidadeItens;
  contador++;
}

int main(void) {
  Item itens[MAX_ITENS];
  short int indiceItem = 0;
  cadastrarItem(&itens[indiceItem++], 1, "Arroz", 25.86, 1, sim);
  cadastrarItem(&itens[indiceItem++], 2, "Feijao", 11.59, 3, sim);
  cadastrarItem(&itens[indiceItem++], 3, "Macarrao", 3.96, 5, nao);
  cadastrarItem(&itens[indiceItem++], 4, "Molho", 2.99, 5, nao);
  cadastrarItem(&itens[indiceItem++], 5, "Farinha de Trigo", 8.79, 2, sim);

  printf("Quantidade de itens cadastrados: %d\n", contador);
	//visualizarItem(&itens[0]);

  //return 0;
}
