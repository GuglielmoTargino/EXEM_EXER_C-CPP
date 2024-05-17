#include <stdio.h>

void somaDois(int numeros[], int tamanho, int alvo) {
	for(size_t indice = 0; indice < tamanho; indice++)
	{
		for(size_t vizinho = indice + 1; vizinho < tamanho; vizinho++){
			int soma = numeros[indice] + numeros[vizinho];
			if(soma == alvo) {
				printf(
					"A soma do alvo está no indice %d e indice %d \n", indice, vizinho
					);
			}
		}
	}
	printf("Não há soma para atingir o alvo");
}

int main(void) {
  int numeros[] = {2, 7, 10, 12};
	int alvo = 30;
	int tamanho = sizeof(numeros) / sizeof(numeros[0]);
	somaDois(numeros, tamanho, alvo);
  return 0;
}
