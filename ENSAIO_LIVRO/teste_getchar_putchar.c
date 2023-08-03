#include <stdio.h>
#include <string.h>

void main(void){
	char str[80];
	char g[80];
	printf("digite uma frase");
	gets(str);
	printf("o comprimento de str é %d", strlen(str));
}
