# include <stdio.h>

int	f1(int n);
int	f2(void);

void	main(void){
	int	t;
	printf("digite um numero_");
	scanf("%i", &t);
	/* imprime a mensagem apropriada*/
	t ? f1(t) + f2(): printf("zero foi digitado_");
}

f1(int n){
	printf("%i_",n);
	return 0;
	}

f2(void){
	printf("foi digitado");
	return 0;
	}


