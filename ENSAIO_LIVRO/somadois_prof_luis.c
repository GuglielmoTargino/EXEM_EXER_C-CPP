#include <stdio.h>
int indice,tamanho,vizinho,band=0;

void somaDois(int numeros[], int tamanho, int alvo) {
	for(indice = 0; indice < tamanho; indice++)
	{
		for(vizinho = indice + 1; vizinho < tamanho; vizinho++){
			int soma = numeros[indice] + numeros[vizinho];
			if(soma == alvo) {
				band=1;
				printf(
					"A soma do alvo está no indice %d e indice %d \n", indice, vizinho
					);
			}
		}
	}
	if(!band){
		printf("Não há soma para atingir o alvo");
	}
	
	
}

int main(void) {
  int numeros[] = {2, 7, 10, 12};
	int alvo =22;
	int tamanho = sizeof(numeros) / sizeof(numeros[0]);
	somaDois(numeros, tamanho, alvo);
  return 0;
}
