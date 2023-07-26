#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct dereco{
	char name[30];
	char street [40];
	char city[20];
	char state[3];
	unsigned long int zip;
}addr_info[MAX];

void init_list(void), enter(void);
void delete(void), list (void);
int menu_select(void), find_free(void);

void main(void){
	char choice;
	init_list(); // inicia lista da matrix  de estrutura
	
	for(;;){
		choice=menu_select();
		switch(choice){
			case 1: enter();
			break;
			case 2: delete();
			break;
			case 3: list();
			break;
			case 4: exit(0);
					  	
		}
	}
	
}

//inicializa a lista

void init_list(void){
	int t;
	for(t=0;t<MAX;++t) addr_info[t].name[0]='\0';	
	
}

//obtem seleção

menu_select(void){
	char s[80];
	int c;
	printf("1.inserir um nome_\n");
	printf("2.excluir um nome_\n");
	printf("3.lista um nome_\n");
	printf("4.sair um nome_\n");
	do {
		printf("\n Faça sua escolha");
		gets(s);
		c=atoi(s);		
	} while(c<0||c>4);
	return c;
}
//insere endereços na lista

void enter(void){
	int slot;
	char s[80];
	slot=find_free();
	if(slot==-1){
		printf("\nlista cheia_");
		return;
		
	}
	printf("digite o nome_: ");
	gets(addr_info[slot].name);
	
	printf("digite a rua_");
	gets(addr_info[slot].street);
	
	printf("digite a cidade_");
	gets(addr_info[slot].city);
	
	printf("digite o estado_");
	gets(addr_info[slot].state);
	
	printf("digite o cep:");
	gets(s);
	addr_info[slot].zip=strtoul(s,'\0',10);
	
	
}

//encontra estrutura não usada

find_free(void){
	int t;
	for(t=0;addr_info[t].name[0] && t<MAX; ++t);
	if(t==MAX) return-1;//nenhum elemento livre
	return t;
	
}
//apaga um endereço

void delete(void){
	int slot;
	char s[80];
	printf("digite a ordem do registro_");
	gets(s);
	slot=atoi(s)-1;
	if(slot>=0 && slot<MAX) addr_info[slot].name[0]='\0';
	
}

// mostra a lista
void list(void){
	int t;
	for (t=0; t<MAX; ++t){
		if(addr_info[t].name[0]){
			printf("(%d)-Nome_%s\n",t+1,addr_info[t].name);
			printf("Rua_%s\n",addr_info[t].street);
			printf("Cidade_%s\n",addr_info[t].city);
			printf("Estado_%s\n",addr_info[t].state);
			printf("CEP_%lu\n", addr_info[t].zip);
		}
	}
}



