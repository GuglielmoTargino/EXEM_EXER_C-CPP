Algoritmo "Calculo para saber a idade de uma pessoa"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 08/03/2022
Var
// Se��o de Declara��es das vari�veis 
   ano_nasc,ano_atual,idade: inteiro


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreval("Digite o ano de nascimento: AAAA")
   leia(ano_nasc)
   escreval("Digite o ano atual: AAAA")
   leia(ano_atual)
   idade <- (ano_atual-ano_nasc)
   escreval("Voc� tem ", idade, " anos de idade")
   
   se (idade>=18)entao
      escreva("Voc� j� tem idade para votar e dirigir")
      senao
           se (idade>=16)entao
              escreva("Voc� tem idade apenas para votar")
              senao
                   escreva("Voc� n�o tem idade para votar nem dirigir")

           fimse
  fimse
              
   


Fimalgoritmo