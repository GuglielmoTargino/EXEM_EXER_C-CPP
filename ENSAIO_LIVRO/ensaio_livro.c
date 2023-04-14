#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f(void);
void main(void)

{ 
  int i;
  for (i=0; i<10; i++) f();
  
}

void f(void)
{
	int j=10;
	printf( "%d", j);
	j++; /* linha sem efeito*/
}
