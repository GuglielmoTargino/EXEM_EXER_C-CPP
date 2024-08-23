#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;

int main() {
	
	char fguga[10];
	
	printf("digite um nome:");
	gets(fguga);
		

    FILE *file;
    Employee emp;
    //strcpy(emp.name, "Camiseta");
    strcpy(emp.name,fguga);
    emp.id=10;
    emp.salary=5.5;
    //Employee emp = {1,"guga", 55000.0f};

    // Abre o arquivo para escrita em modo texto
    //file = fopen("C:/caminho/para/seu/diretorio/employee.txt", "w");

    file = fopen("employee2.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escreve os dados da estrutura emp no arquivo em formato de texto
    fprintf(file, "ID: %d\n", emp.id);
    fprintf(file, "Name: %s\n", emp.name);
    fprintf(file, "Salary: %.2f\n", emp.salary);

    printf("Dados escritos com sucesso no arquivo de texto!\n");

    // Fecha o arquivo
    fclose(file);

    return 0;
}

