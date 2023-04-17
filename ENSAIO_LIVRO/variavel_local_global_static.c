# include <stdio.h>
/* trecho do livro apenas pg33*/
  static int series_num;
  void series_star();
  int series(void);
  series(void){
  	series_num=series_num+23;
  	return series_num;
  }
  
  /* inicializa series_num*/
  void series_sart(int seed){  	
  
  	   series_num=seed;  
		 }
