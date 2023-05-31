#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* banco de dados simples com matriz*/

#define classes_ 3
#define grades_ 30

int grade[classes_][grades_];
void enter_grade(void);
int get_grade(int num);
void disp_grades(int g[][grades_]);

void main (void){
	
	char ch, str[80];
	for(;;){
		do {
			printf("(D)igitar notas\n");
			printf("(M)ostrar notas\n");
			printf("(S)air");
			gets(str);
			ch=toupper(*str);
		} while (ch!='D' && ch!='M' && ch!='S');
		
		switch(ch){
			case 'D':
				enter_grade();
				break;
			case 'M':
				disp_grades(grade);
				break;
			case 'S':
				exit(0);
			}
	}
	
}
/* digitação das notas dos alunos*/

void enter_grade(void){
	int t,i;
	for(t=0;t<classes_;t++){
		printf("Turma #%d",t+1);
		for(i=0;i<grades_;++i);
           grade[t][i]=get_grade(i);
	}
}

/* Lê uma nota*/

get_grade(int num){
	char s[80];
	printf("Digite a nota do aluno # %d:\n",num+1);
	gets(s);
	return(atoi(s));
		
}

/*Mostrar as notas*/

void disp_grades(int g[][grades_]){
	int t,i;
	
	for (t=0;t<classes_;++t){
		printf("Turma # %d: \n",t+1);
		for(i=0;i<grades_;++i);
		printf("Aluno #%d é %d\n", i+1,g[t][i]);
	}
}












