# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

void main(void){
	
	char str[20];
	int x;
	for (x=0; x<3 && strcmp(str,"senha");x++){
		printf("Digite a senha por favor. tentativa (%d)_\n",x+1);
		gets(str);
		
		if (strcmp(str,"senha")==0) {
			printf("Sucesso.\n");
		}
		   
	
	}
}
