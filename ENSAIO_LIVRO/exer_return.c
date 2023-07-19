#include <stdio.h>
int find_substr(char *s1, char *s2);
void main(void){
	int t;
	if (find_substr("legal","g") !=-1)
	printf("a sub string não foi encontrada\n");
	printf("%s",t);
	
}
/* devolve o indice de s1 em s2*/

find_substr(char *s1,char *s2){
	int t;
	char *p,*p2;
	
	for (t=0; s1[t];t++){
		p=&s1[t];
		p2=s2;
		
		while (*p2 && *p2==*p){
			p++;
			p2++;
		}
		if(!*p2) return t; /* 1 retorno*/
		
	}
	return -1; /* 2 retorno*/
}
