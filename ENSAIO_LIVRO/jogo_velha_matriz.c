#include <stdio.h>
#include <stdlib.h>

char matrix[3][3]; /*matriz do jgo 3x3*/

char check(void);
void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);

void main(void){
	
	char done;
	
	printf("Este � o jogo-da-velha.\n");
	printf("Voc� estar� jogando comtra o computador,\n");
	
	done=' ';
	init_matrx();
	do{
		disp_matrix();
	get_player_move();
	done=check(); /* verifica se h� vencedor*/
	if(done!=' ') break; /* vencedor */
	done=check(); /* verifica se h� vencedor*/
	
	
	} while ( done==' ');
	if (done=='X') printf("Voc� ganhou!\n");
	else printf (" Eu ganhei!!\n");
	disp_matrix();
	
}

/* Inicia a matrix*/

void init_matrix(void){
	int i,j;
	for (i=0; i<3; i++)
		for (j=0; j<3; j++) matrix[i][j]=' ';
		
}
/* obtem a sua jogada*/

void get_player_move(void){
	int x,y;
	printf("digite as coordenadas para o X:");
	scanf("%d%d", &x, &y);
	x--;
	y--;
}


