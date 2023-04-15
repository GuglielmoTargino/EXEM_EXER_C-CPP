#include <stdio.h>

void sp_to_dash(const char *str);

void main(void){	
	sp_to_dash("isto é um teste\n");
	sp_to_dash("meu teste agora");
}

void sp_to_dash(const char *str){
	while(*str){
		if(*str==' ') printf("%c", '-');
		else printf("%c", *str);
		str++;
	}
}



