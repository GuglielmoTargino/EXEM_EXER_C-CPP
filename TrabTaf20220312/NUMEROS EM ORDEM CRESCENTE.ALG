Algoritmo "NUMEROS EM ORDEM CRESCENTE"
//  
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 14/09/2018
Var
     A,B,C: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
      escreval("Didite o primeiro n�mero")
      leia(A)
      escreval("Digite o segundo n�mero")
      leia(B)
      escreval("Digite o terceiro n�mero")
      leia(C)


      
      se (A=B) ou (B=C) entao
         escreval("N�o vale n�meros iguais")
      senao
           se (A > B) e (A > C) entao
              se (B > C) entao
                 escreval("A ordem crescente �: ",C,B,A)
              senao
                   escreval("A ordem crescente �: ",B,C,A)
              fimse
           fimse
      fimse
          se (B > A) e (B > C) entao
             se (A > C)entao
                escreval("A ordem crescente �: ",C,A,B)
          senao
               escreval("A ordem crescente �: ",A,C,B)
             fimse
          fimse
          se (C>A) e (C>B) entao
             se (A>B) entao
                escreval("A ordem crescente �: ",B,A,C)
          senao
               escreval("A ordem crescente �: ",A,B,C)
             fimse
          fimse

Fimalgoritmo