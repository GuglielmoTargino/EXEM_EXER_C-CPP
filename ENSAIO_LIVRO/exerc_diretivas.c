/*
  Exerc�cio do livro c-completo.
  aluno/editor Guglielmo Henriques Targino
  data: 05/10/23
  vers�o:V0
*/



#include "stdio.h"
#define TED 10
void main(void){
	#ifdef TED
 	  printf("TED legal")
	#else
	  printf("Diz a�");
	#endif
	
	#ifndef RALPH
      printf("RALPH nao defiido\n");
 	#endif  
}
