# include <stdio.h>
# include <string.h>

void pad(char *s, int length);
void main(void){
	
	char str[10];
	strcpy(str, "isto � teste");
	pad(str,40);
	printf("%d",strlen(str));
}
/* acrescenta espa�os no final da string*/

void pad(char *s, int lenght){
	int l;
	
	l=strlen(s); // acha o comprimento
	 
	while (l<lenght){
		s[l]=' '; //insere o espa�o
		l++;
		printf("%d\n",l);
	}
	s[l]='\0'; //string precisa terminar com um nulo.
	printf("%d",s);
}
