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
 
  	// Função para apagar itens.
 void apagarItem(Item *item, int codigo, const char *descricao,
 float valorTotal, int quantidadeItens, bool achouCaro) {	
	
	item->codigo = codigo;
  	strcpy(item->descricao, descricao);
  	item->valorTotal = valorTotal;
  	item->quantidadeItens = quantidadeItens;
  	item->achouCaro=achouCaro;  	

}

  	// Função para alterar itens.
 void alterarItem(Item *item, int codigo, const char *descricao,
 float valorTotal, int quantidadeItens, bool achouCaro) {	
	
	item->codigo = codigo;
  	strcpy(item->descricao, descricao);
  	item->valorTotal = valorTotal;
  	item->quantidadeItens = quantidadeItens;
  	item->achouCaro=achouCaro;  	

}
 	// Função para se alterar apenas o nome do item.
 void alterarNomeItem(Item *item, const char *descricao) {		
	
  	strcpy(item->descricao, descricao);  
}

 	// Função para se alterar apenas o preço do item.
 void alterarPrecoItem(Item *item, float valorTotal) {		
	
  	item->valorTotal = valorTotal; 
}




 int main(void) {
 	
  	Item itens[MAX_ITENS];
  	short int indiceItem = 0;
	cadastrarItem(&itens[indiceItem++], 1, "Arroz", 25.86, 1, sim);
  	cadastrarItem(&itens[indiceItem++], 2, "Detergente", 11.59, 3, sim);
  	cadastrarItem(&itens[indiceItem++], 3, "Ovo", 3.96, 5, nao);
 	cadastrarItem(&itens[indiceItem++], 4, "Farinha", 2.99, 5, nao);
 	cadastrarItem(&itens[indiceItem++], 5, "Leite", 8.79, 2, sim);
	
	
  	
  	//Chama a função para visualizar os itens cadastrados
	///////visualizarItem(&itens[0]);
	
	//Chama a função apagar itens passando valores zero.
	////////apagarItem(&itens[0], 0, "Produto nao Cadastrado",0, 0, nao);
	
	//Chama a função para visualizar os itens cadastrados
	//visualizarItem(&itens[0]);
	
	//Chama a função alterar itens passando novos valores .
	//alterarItem(&itens[0], 30, "Novo Item",45.56, 8, sim);
	
		//Chama a função para visualizar os itens cadastrados
	visualizarItem(&itens[0]);
	
	//Chama a função alterar nome do item passando novo valor.
	alterarNomeItem(&itens[0],"Feijao");
	
	visualizarItem(&itens[0]);
	alterarPrecoItem(&itens[0],30.56);
	visualizarItem(&itens[0]);
	
  return 0;
}
