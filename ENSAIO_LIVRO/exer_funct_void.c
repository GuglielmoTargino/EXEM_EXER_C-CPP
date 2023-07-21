#include <stdio.h>
void print_vertical(char *str);



void main (int argc, char *argv[]){
	/*printf("%s",argv[0]);*/

	if(argc)		print_vertical(argv[0]); //print_vertical(argv[1]);
		
	}


void print_vertical(char *str){
	 while(*str)		printf("%c\n",*str++);
		
	}
	

