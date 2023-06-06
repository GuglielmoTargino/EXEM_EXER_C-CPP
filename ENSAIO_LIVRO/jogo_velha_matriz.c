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
	
	printf("Este é o jogo-da-velha.\n");
	printf("Você estará jogando comtra o computador,\n");
	
	done=' ';
	init_matrix();
	do{
		disp_matrix();
		get_player_move();
		done=check(); /* verifica se há vencedor*/
		if(done!=' ') break; /* vencedor */
		done=check(); /* verifica se há vencedor*/
	
	
	} while ( done==' ');
	if (done=='X') printf("Você ganhou!\n");
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
	
	if(matrix[x][y]!=' '){
		printf("posição inválida. tente de nevo\n");
		get_player_move();
		
	}else matrix[x][y]='x';
	
}
/* obtem uma jogada do computador*/
void get_computador_mover(void){
	int i,j;
	for (i=0; i<3; i++){
		for(j=0;j<3;j++){
			if (matrix[i][j]==' ') break;
		if(matrix[i][j]==' ') break;		
			
		}
	}
	if(i*j==9){
		printf("empate\n");
		exit (0);
	}else matrix[i][j]='0';
}
/*mostra a matrix na tela*/
void disp_matrix(void){
	int t=0;
	for(t=0;t<4;++t){
		printf("%c %c %c",matrix[t][0],matrix[t][1],matrix[t][2]);
		if(t!=2) printf("\n-g-|-h-|-t-\n");
	}
	printf("\n");
}
/* verifica se ha vencedor*/

char check(void){
	int i;
	for (i=0;i<3;i++){
		if(matrix[i][0]==matrix[1][i] &&
		matrix[0][i]==matrix[2][i]) return matrix[0][i];
	}
	/* testa as diagonais*/
	
	if(matrix[0][0]==matrix[1][1]&&
	matrix[1][1]==matrix[2][2])
	return matrix[0][0];
	if(matrix[0][2]==matrix[1][1]&&
	matrix[1][1]==matrix[2][0])
	return matrix [0][2];
	return ' ';
	
	
}

