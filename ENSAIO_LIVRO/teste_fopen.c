#include <stdio.h>
#include <stdlib>

void main void (int argc, char *argv){
	
	FILE *fp;
	char str [128];
	
	if ((fp=fopen(argv[1],"r"))==NULL){
		printf(" o arquivo não abre");
		exit(1);
	}
	while(!feof(fp)){
		if (fgets(str,126,fp)) printf("%s",str);
	}
	fclose(fp);
}
