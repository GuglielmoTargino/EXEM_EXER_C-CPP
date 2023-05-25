#include<stdio.h>
void main(void){
	int x;
	x=0;
	loop:
		x++;
		printf("%d",x);
		if(x<10) goto loop;
}
