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
#define MAX_ITENS 4
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

  //Variáveis para nomes de itens
  
  char a[20]="pao";
  char b[20]="sapato";
  char c[20]="prato";
  char d[20]="ovo";
  char e[20]="sabao";

 void cadastrarItem(Item *item, int codigo, const char *descricao,
 float valorTotal, int quantidadeItens, bool achouCaro) {
	
	
	item->codigo = codigo;
  	strcpy(item->descricao, descricao);
  	item->valorTotal = valorTotal;
  	item->quantidadeItens = quantidadeItens;
  	item->achouCaro=achouCaro;
  	
  	contador++;
}

 	//Função para visualização dos itens cadastrados.
 void visualizarItem(const Item *item){
 	printf(" Codigo item: %d\n",item->codigo);
 	printf(" Nome do item: %s\n",item->descricao);
 	printf(" Valor do item: %.2f\n",item->valorTotal);
 	printf(" Quantidade de itens: %d\n",item->quantidadeItens); 	
 	printf(" Gostou do preco do item?: %s\n",item->achouCaro?"Sim":"Não");
 	printf("\n");
 }

 int main(void) {
  	Item itens[MAX_ITENS];
  	short int indiceItem = 0;
	cadastrarItem(&itens[indiceItem++], 1, a, 25.86, 1, sim);
  	cadastrarItem(&itens[indiceItem++], 2, b, 11.59, 3, sim);
  	cadastrarItem(&itens[indiceItem++], 3, c, 3.96, 5, nao);
 	cadastrarItem(&itens[indiceItem++], 4, d, 2.99, 5, nao);
 	cadastrarItem(&itens[indiceItem++], 5, e, 8.79, 2, sim);
	
	//linha de comando fase alfaV0
	//cadastrarItem(&itens[indiceItem++], 5, "Farinha de Trigo", 8.79, 2, sim);


  	printf("Quantidade de itens cadastrados: %d\n", contador);
  	
  	//Chama a função para visualizar os itens cadastrados
	visualizarItem(&itens[1]);
	

  return 0;
}
