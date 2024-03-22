#include <stdio.h>

int main() {
  char nome[100];
  int valor_letras[26] = {1, 2, 3, 4, 5, 6, 7, 8, 9,
                         10, 20, 30, 40, 50, 60, 70, 80,
                         90, 100, 200, 300, 400, 500, 600,
                         700, 800};
  int soma = 0, i;

  // Leitura do nome usando fgets
  fgets(nome, sizeof(nome), stdin);

  // Remo��o do caractere de nova linha
  for (i = 0; nome[i] != '\0'; i++) {
    if (nome[i] == '\n') {
      nome[i] = '\0';
      break;
    }
  }

  // C�lculo do n�mero numerol�gico
  for (i = 0; nome[i] != '\0'; i++) {
    soma += valor_letras[nome[i] - 'A'];
  }

  // Exibi��o do resultado
  printf("O n�mero numerol�gico eg�pcio de %s � %d\n", nome, soma);

  return 0;
}
