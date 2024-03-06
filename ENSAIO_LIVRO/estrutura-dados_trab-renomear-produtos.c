/*
Trabalho de aula Estruturas de Dados.
O objetivo deste trabalho � implementar as fun��es 
de excluir, alterar e renomear os itens j� propostos.

Aluno: Guglielmo Targino.
Data:29fev24
Vers�o:v0.

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

  

 void cadastrarItem(Item *item, int codigo, const char *descricao,
 float valorTotal, int quantidadeItens, bool achouCaro) {
	
	
	item->codigo = codigo;
  	strcpy(item->descricao, descricao);
  	item->valorTotal = valorTotal;
  	item->quantidadeItens = quantidadeItens;
  	item->achouCaro=achouCaro;  	
  	contador++;
}

 	//Fun��o para visualiza��o dos itens cadastrados.
 void visualizarItem(const Item *item){
 	
 	printf(" Codigo item: %d\n",item->codigo);
 	printf(" Nome do item: %s\n",item->descricao);
 	printf(" Valor do item: %.2f\n",item->valorTotal);
 	printf(" Quantidade de itens: %d\n",item->quantidadeItens); 	
 	printf(" Gostou do preco do item?: %s\n",item->achouCaro?"Sim":"N�o");
 	printf("\n");
 }
 
 void apagarItem(Item *item, int codigo, const char *descricao,
 float valorTotal, int quantidadeItens, bool achouCaro) {
	
	
	item->codigo = codigo;
  	strcpy(item->descricao, descricao);
  	item->valorTotal = valorTotal;
  	item->quantidadeItens = quantidadeItens;
  	item->achouCaro=achouCaro;  	

}


 int main(void) {
 	
  	Item itens[MAX_ITENS];
  	short int indiceItem = 0;
	cadastrarItem(&itens[indiceItem++], 1, "Pao", 25.86, 1, sim);
  	cadastrarItem(&itens[indiceItem++], 2, "Feijao", 11.59, 3, sim);
  	cadastrarItem(&itens[indiceItem++], 3, "Ovo", 3.96, 5, nao);
 	cadastrarItem(&itens[indiceItem++], 4, "Farinha", 2.99, 5, nao);
 	cadastrarItem(&itens[indiceItem++], 5, "Leite", 8.79, 2, sim);
	
	//linha de comando fase alfaV0
	//cadastrarItem(&itens[indiceItem++], 5, "Farinha de Trigo", 8.79, 2, sim);


  	//printf("Quantidade de itens cadastrados: %d\n", contador);
  	
  	//Chama a fun��o para visualizar os itens cadastrados
	visualizarItem(&itens[0]);
	apagarItem(&itens[0], 0, "Produto nao Cadastrado",0, 0, nao);
	visualizarItem(&itens[0]);
	
  return 0;
}
