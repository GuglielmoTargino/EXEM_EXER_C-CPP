# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

void main(void){
	
	char str[20];
	int x;
	for (x=0; x<3 && strcmp(str,"senha");x++){
		printf("Digite a senha por favor_");
		gets(str);
		
	if (x==3) return;
	printf("%d",x);
	
	}
}
