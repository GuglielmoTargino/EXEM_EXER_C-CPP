#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ght(void); 
void main(void)                                                                                      

{ 
  int i;
  for (i=0; i<10; i++) ght(); 
  
}

void ght() 
{
	int j=10;
	printf( "%d-", j);
	j++; /* linha sem efeito porque sempre que entra na função j=10*/
}
