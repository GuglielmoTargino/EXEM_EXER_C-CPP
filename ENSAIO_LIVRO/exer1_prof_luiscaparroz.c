#include <stdio.h>

int indice;

int exercicio1(int vetor[], int valor1, int valor2){
	int encontrouValor1 = 0;
	int encontrouValor2 = 0;
	for(indice = 0; indice < 10; indice++){
		if(valor1 == vetor[indice]){
			encontrouValor1 =  1;
		}

		if(valor2 == vetor[indice]){
			encontrouValor2 = 1;
		}
	}

	return encontrouValor1 && encontrouValor2;
}

int main(void) {
  int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	if(exercicio1(vetor, 2, 81)) {
		printf("Valores existem");
	}
	else {
		printf("Não existe");
	}
  return 0;
}
