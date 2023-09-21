/*
Exercicio do livro linguagem c.
Programa transcrito do original para listar codigos postais.
Digitador: Guglielmo Henriques Targino.
Data:20/09/23.
Versão:v0
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

struct list_type{
	char name[40];
	char street[40];
	char city[30];
	char state[3];
	char zip[10];	
	
}list[SIZE];

int menu(void);
void init_list(void),enter(void);
void display(void),save(void);
void load(void);

void main(void){
	char choice;
	init_list();
	
	for(;;){
		choice=menu();
		switch(choice){
			case'i':  enter();
			break;
			case 'v': display();
			break;
			case 's': save();
			break;
			case 'l': load();
			break;
			case 't': exit(0);
			
		}
	}
}

// inicia a lista 

void init_list(void){
	int t;
	for (t=0; t<SIZE;t++) *list[t].name='\0';
	//um nome de comprimento zero significa vazio
	
}
//insere nomes na lista
void enter(void){
	int i;
	for(i=0;i<SIZE;i++)
       if(!*list[i].name)break;
    if(i==SIZE){
    	printf("lista cheia\n");
    	return;    	
	}
	printf("nome:");
	gets(list[i].name);
	
	printf("rua:");
	gets (list[i].street);
	
	printf("cidade");
	gets (list[i].city);
	
	printf("estado");
	gets(list[i].state);
	
	printf("cep");
	gets(list[i].zip);
	
}

//mostra a lista

void display(void){
	
	int t;
	for(t=0;t<SIZE;t++){
		if(*list[t].name){
			printf("%s\n",list[t].name);
			printf("%s\n",list[t].street);
			printf("%s\n",list[t].city);
			printf("%s\n",list[t].state);
			printf("%s\n\n",list[t].zip);
			
		}
	}

}


//salva a lista

void save(void){
	FILE *fp;
	int i;
	if((fp=fopen("maillist","wb"))==NULL){
		printf("o arquivo não pode ser aberto\n");
		
	}
	for (i=0;i<SIZE;i++);
	 	if(*list[i].name)
	 	
		  if(fwrite(&list[i],sizeof(struct list_type),1,fp)!=1)
		  printf("erro de escrita\n");
    fclose(fp);
    
}

//carrega arquivo

void load(void){
	
	FILE *fp;
	int i;
	if((fp=fopen("maillist","rb"))==NULL){
		printf("arquivo não pode ser aberto\n");
		return;
		
	}
	init_list();
	for(i=0;i<SIZE;i++)
	  if(fread(&list[i],sizeof(struct list_type),1,fp)!=1){
	  	if(feof(fp)) break;
	  	printf("erro de leitura no arquivo\n");
	  }
	  fclose(fp);
}

// pega uma seleção
menu(void){
	char s[80];
	
	do{
        printf("escolhar_\n");
		printf("(i) inserir\n");
		printf("(v) visualizar\n");
		printf("(c) carregar\n");
		printf("(s) salvar\n");
		printf("(t) terminar\n");
	
		gets(s);		
		
	}while (!strchr("ivcst", tolower(*s)));
	return tolower(*s);
}




