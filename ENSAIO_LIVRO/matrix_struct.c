#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct addr{
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
			case 1: enter()
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
}
