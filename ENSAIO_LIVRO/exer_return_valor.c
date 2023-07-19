#include <stdio.h>
float sum();
float first,second;
void main(void){
	first=3.62;
	second=4.35;
	printf("%.2f", sum());
		
}
 float sum(){
	return first+second;
}
