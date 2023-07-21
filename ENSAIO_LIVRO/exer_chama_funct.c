#include <stdio.h>
int sqr(int a);

void main(void){
	int x;
	 for (x=1;x<5;x++)	printf("%d",sqr(x));
	
}

sqr(int a){
	return a*a;
}
