#include<stdio.h>

void main(void){
	char s[80], *str;
	int space;
	printf("digite uma string\n");
	gets(s);
	str=s;
	printf("%s\n",s);
	
	for(space=0;*str;str++){
		if(*str!=' ')continue ;
		space++;/*controla o la�o*/
		printf("ola\n");
			
	}
	printf("%d espa�os\n",space);
	
}
