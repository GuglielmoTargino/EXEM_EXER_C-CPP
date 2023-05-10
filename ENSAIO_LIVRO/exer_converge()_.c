# include <stdio.h>
# include <string.h>
# include <conio.h>


void converge(int line, char *message);


void main(void){
	
	converge(10,"isto é um teste de converge().");
	
}

void converge(int line,char *message){
	
		int i,j;
		
	for (i=1, j=strlen(message);i<j;i++,j--){
		
		_gotoxy(i,line); printf("%c",message[i-1]);
		gotoxy(j,line); printf("%c",message[j-1]);
	
	}
}
