#include <stdio.h>
/*
  Exerc�cio feito em sala de aula para passar um vetor para 
  uma funcao.
  Aluno: Guglielmo
  Data:16mai24.
  vers�o: v0

*/
int buscaBinaria(int vetor[], int direita, int esquerda, int valorProcurado) {
  while (direita <= esquerda) {
    int meio = direita + (esquerda - direita) / 2;
    // Se o elemento est� no meio
    if (vetor[meio] == valorProcurado) {
      return meio;
    }
    // Se o elemento � maior que o meio,
    // ent�o ele est� na parte superior (esquerda) da matriz
    if (vetor[meio] < valorProcurado) {
      direita = meio + 1;
    }
    // Se o elemento � menor que o meio,
    // ent�o ele est� na parte inferior (direita) da matriz
    else {
      esquerda = meio - 1;
    }
  }
  // O elemento n�o est� presente na matriz
  return -1;
}

int main() {
  int vetor[] = {2, 3, 4, 10, 40};
  int n = sizeof(vetor) / sizeof(vetor[0]);
  int valorProcurado = 4;
  int resultado = buscaBinaria(vetor, 0, n - 1, valorProcurado);
  if (resultado == -1) {
    printf("O elemento n�o est� presente na matriz");
  } else {
    printf("O elemento est� presente na posi��o %d", resultado);
  }
  return 0;
}
