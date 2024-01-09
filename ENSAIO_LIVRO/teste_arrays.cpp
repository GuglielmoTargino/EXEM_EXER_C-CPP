   /*
   Exercício com arrays
   Autor:Guglielmo Targino.
   Data:08jan24
   Versão: v0
   
   */
   #include <iostream>
   #include <string>
   #include <locale>
   
   using namespace std;
   
   int main(void){
   	
   	setlocale(LC_ALL,"Portuguese");
   
   
    string stringArray[4] ={"Olá", "Mundo", "em", "C++"} ;

    // Imprimindo os elementos da array
    for (int i = 0; i < 4; ++i) {
        cout << stringArray[i] << " ";
    }

   
   
   }
   
   
   
   
   
  
