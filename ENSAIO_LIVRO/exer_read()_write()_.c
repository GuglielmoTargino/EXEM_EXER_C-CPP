/*
PROGRAMA CRIADO DE UM EXERCÍCIO DO LIVRO C-COMPLETO.
LÊ A ENTRADA DO TECLADO E ESCREVE NUM BUFFER EM UM ARQUIVO EM DISCO.

ALUNO/AUTOR: GUGLIELMO HENRIQUES TARGINO
DATA: 02/10/23
VERSAO:V0

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    FILE *file;
    Employee emp = {1, "John Doe", 55000.0f};

    // Abre o arquivo para escrita binária
    //file = fopen("C:/caminho/para/seu/diretorio/employee.dat", "wb");

    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escreve a estrutura emp no arquivo
    size_t elements_written = fwrite(&emp, sizeof(Employee), 1, file);
    if (elements_written != 1) {
        printf("Erro ao escrever no arquivo.\n");
    } else {
        printf("Dados escritos com sucesso!\n");
    }

    // Fecha o arquivo
    fclose(file);

    return 0;
}


