#include <stdio.h>

void main (void){
	int i;
	char str[80],str2[80];
	scanf("%d%[guga]%s",&i,str,str2);// %d se refere &i, %[guga] se refere str, %s se refere str2.
	printf("%d %s %s",i,str,str2);
	
}
