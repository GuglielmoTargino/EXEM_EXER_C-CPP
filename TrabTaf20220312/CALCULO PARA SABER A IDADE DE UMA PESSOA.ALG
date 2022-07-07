Algoritmo "Calculo para saber a idade de uma pessoa"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 08/03/2022
Var
// Seção de Declarações das variáveis 
   ano_nasc,ano_atual,idade: inteiro


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Digite o ano de nascimento: AAAA")
   leia(ano_nasc)
   escreval("Digite o ano atual: AAAA")
   leia(ano_atual)
   idade <- (ano_atual-ano_nasc)
   escreval("Você tem ", idade, " anos de idade")
   
   se (idade>=18)entao
      escreva("Você já tem idade para votar e dirigir")
      senao
           se (idade>=16)entao
              escreva("Você tem idade apenas para votar")
              senao
                   escreva("Você não tem idade para votar nem dirigir")

           fimse
  fimse
              
   


Fimalgoritmo