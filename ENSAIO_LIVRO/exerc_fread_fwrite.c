/*
escreve alguns dados em um arquivo de disco
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
	
	FILE *fp;
	double d=1.23;
	int i=101;
	long l=123023L;
	if((fp=fopen("test","wb+"))==NULL){
		printf(" o arquivo n�o pode ser aberto.\n");
		exit(1);
	}
	fwrite(&d,sizeof(double),1,fp);
	fwrite(&i,sizeof(int),1,fp);
	fwrite(&i,sizeof(long),1,fp);
		
	rewind(fp);
	
	fread(&d,sizeof(double),1,fp);
	fread(&i,sizeof(int),1,fp);
	fread(&l,sizeof(long),1,fp);
	
	printf("%f %d %ld",d,i,l);
	
	fclose(fp);
	
	
	
}
