#include <stdio.h>
	struct u{
		char i;
		int g;
		float f;
	};
void main(void){

	struct u ght;
	printf("%d\n",sizeof(ght.i));
	printf("%d\n",sizeof(ght.g));
	printf("%d\n",sizeof(ght.f));// resultado é em byte.
	printf("%d",sizeof(ght));
	
}
