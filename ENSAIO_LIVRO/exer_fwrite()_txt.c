#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;

int main() {
	int i;
	char x[10];
	float z;
	
	

	
	printf("digite um nome:");
	gets(x);
	//scanf("%s",&x);
	printf("digite um numero:");
	scanf("%d",&i);
	
	printf("digite um salario");
	scanf("%f",&z);
	
	
		

    FILE *file;
    Employee emp;
    //strcpy(emp.name, "Camiseta");
    emp.id=i;
    strcpy(emp.name,x);
    
    emp.salary=z;
    //Employee emp = {1,"guga", 55000.0f};

    // Abre o arquivo para escrita em modo texto
    //file = fopen("C:/caminho/para/seu/diretorio/employee.txt", "w");

    file = fopen("employee2.txt","w");
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

