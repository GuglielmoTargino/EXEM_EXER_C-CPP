#include <stdio.h>

struct gato{
	char dente[80];
	char unha;
	char pelo;
}pet;

void main(void){
	
	//struct gato pet;
	
	pet.dente[0]='f';
	pet.dente[1]='o';
	pet.dente[2]='r';
	pet.dente[3]='t';
	pet.dente[4]='e';
	pet.dente[5]='\0';
	pet.pelo='p';
	pet.unha='u';
	printf("item %s\n",pet.dente);
	printf("item %c\n",pet.pelo);
	printf("item %c",pet.unha);
}
