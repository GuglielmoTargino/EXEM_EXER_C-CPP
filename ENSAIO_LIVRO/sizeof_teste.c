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
	printf("%d\n",sizeof(ght.f));
	printf("%d",sizeof(ght));
	// resultado mostra quantos bytes tem cada tipo de variável.
	
}
