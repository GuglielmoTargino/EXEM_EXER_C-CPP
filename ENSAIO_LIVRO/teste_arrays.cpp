   /*
   Exerc�cio com arrays
   Autor:Guglielmo Targino.
   Data:08jan24
   Vers�o: v0
   
   */
   #include <iostream>
   #include <string>
   #include <locale>
   
   using namespace std;
   
   int main(void){
   	
   	setlocale(LC_ALL,"Portuguese");
   
   
    string stringArray[4] ={"Ol�", "Mundo", "em", "C++"} ;

    // Imprimindo os elementos da array
    for (int i = 0; i < 4; ++i) {
        cout << stringArray[i] << " ";
    }

   
   
   }
   
   
   
   
   
  
