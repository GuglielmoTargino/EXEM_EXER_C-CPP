Algoritmo "NUMEROS EM ORDEM CRESCENTE"
//  
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 14/09/2018
Var
     A,B,C: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
      escreval("Didite o primeiro número")
      leia(A)
      escreval("Digite o segundo número")
      leia(B)
      escreval("Digite o terceiro número")
      leia(C)


      
      se (A=B) ou (B=C) entao
         escreval("Não vale números iguais")
      senao
           se (A > B) e (A > C) entao
              se (B > C) entao
                 escreval("A ordem crescente é: ",C,B,A)
              senao
                   escreval("A ordem crescente é: ",B,C,A)
              fimse
           fimse
      fimse
          se (B > A) e (B > C) entao
             se (A > C)entao
                escreval("A ordem crescente é: ",C,A,B)
          senao
               escreval("A ordem crescente é: ",A,C,B)
             fimse
          fimse
          se (C>A) e (C>B) entao
             se (A>B) entao
                escreval("A ordem crescente é: ",B,A,C)
          senao
               escreval("A ordem crescente é: ",A,B,C)
             fimse
          fimse

Fimalgoritmo