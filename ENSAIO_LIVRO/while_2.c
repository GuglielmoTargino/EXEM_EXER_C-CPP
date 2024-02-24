# include<stdio.h>
# include<string.h>

void pad(char *s, int length);

void main(void){
	
	char str[80];
	
	strcpy(str,"teste agora");
	pad(str,40);
	printf("%d ",strlen(str)); /* imprime o comprimento de <str>*/
	printf("%s",str);
			
}
/* acrescenta espaços aqui*/
void pad(char *s, int length){/* <*s> recebe str,  e <length> recebe 40*/
	int l;
	l=strlen(s); /* acha o comprimrnto aqui e coloca em i o valor */

	while(l<length){
		s[l]='g'; /* insere espaço, nesse caso g*/
		l++;

		
	}
	s[l]='\0';
	
}
