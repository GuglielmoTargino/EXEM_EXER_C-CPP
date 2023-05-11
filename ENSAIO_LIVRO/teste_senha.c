# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

void main(void){
	int x,k;
	char str[20];
	for (x=0; x<3 && strcmp(str,"senha");x++){
		printf("Digite a senha por favor. tentativa (%d)_\n",x+1);
		gets(str);
		
		if (strcmp(str,"senha")==0) {
			printf("Sucesso.\n");
		}
		   
	
	}
	
	//outra forma de laço FOR, sem o incremento.
	for(k=0;k!=45;) scanf("%d",&k);
}
