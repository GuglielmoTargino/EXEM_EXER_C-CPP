#include <stdio.h>

void sp_to_dash(const char *str);

void main(void){	
	sp_to_dash("isto é um teste");
}

void sp_to_dash(const char *str){
	while(*str){
		if(*str==' ') printf("%c", '_');
		else printf("%c", *str);
		str++;
	}
}



