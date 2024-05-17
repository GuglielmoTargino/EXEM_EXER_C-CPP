#include <stdio.h>
/*
  Exercício feito em sala de aula para passar um vetor para 
  uma funcao.
  Aluno: Guglielmo
  Data:16mai24.
  versão: v0

*/
int buscaBinaria(int vetor[], int direita, int esquerda, int valorProcurado) {
  while (direita <= esquerda) {
    int meio = direita + (esquerda - direita) / 2;
    // Se o elemento está no meio
    if (vetor[meio] == valorProcurado) {
      return meio;
    }
    // Se o elemento é maior que o meio,
    // então ele está na parte superior (esquerda) da matriz
    if (vetor[meio] < valorProcurado) {
      direita = meio + 1;
    }
    // Se o elemento é menor que o meio,
    // então ele está na parte inferior (direita) da matriz
    else {
      esquerda = meio - 1;
    }
  }
  // O elemento não está presente na matriz
  return -1;
}

int main() {
  int vetor[] = {2, 3, 4, 10, 40};
  int n = sizeof(vetor) / sizeof(vetor[0]);
  int valorProcurado = 4;
  int resultado = buscaBinaria(vetor, 0, n - 1, valorProcurado);
  if (resultado == -1) {
    printf("O elemento não está presente na matriz");
  } else {
    printf("O elemento está presente na posição %d", resultado);
  }
  return 0;
}
