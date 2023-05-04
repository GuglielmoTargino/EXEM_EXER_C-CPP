# include <stdio.h>

void main(void){
	
	char ch;
	printf("Escolha um item a fazer:");
	printf("\n 1- Comprar:\n 2-Vender\n 3- Alugar.\n");
	ch=getchar();
	
	switch(ch){
		
		case '1':
			printf("vc exscolheu comprar");
			break;
		case '2':
			printf("vc escolheu vender");
			break;
		case '3':
			printf("vc escolheu alugar");
			break;
		default:
			printf("escolha invalida");
	}
}
