Algoritmo "Algoritmo para ler codigo produto"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/03/2022
Var
// Seção de Declarações das variáveis 

   codigo: inteiro


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

   escreval("Algoritmo para ler código de produtos")
   escreval("       ")
   escreval("Digite o código do produto entre 1 e 15")

   leia(codigo)
   
   escolha(codigo)
          caso 1
               escreval(codigo,"-Alimento não-perecível")
          caso 2

               escreval(codigo,"-Alimento perecível")
          caso 3

               escreval(codigo,"-Alimento perecível")
          caso 4
               escreval(codigo,"-Alimento perecível")
          caso 5
               escreval(codigo,"-Vestuário")
          caso 6
               escreval(codigo,"-Vestuário")
          caso 7
               escreval(codigo,"-Higiene")
          caso 8
               escreval(codigo,"-Limpeza e Utensílios domésticos")
          caso 9
               escreval(codigo,"-Limpeza e Utensílios domésticos")
          caso 10
               escreval(codigo,"-Limpeza e Utensílios domésticos")
          caso 11
               escreval(codigo,"-Limpeza e Utensílios domésticos")
          caso 12
               escreval(codigo,"-Limpeza e Utensílios domésticos")
          caso 13
               escreval(codigo,"-Limpeza e Utensílios domésticos")
          caso 14
               escreval(codigo,"-Limpeza e Utensílios domésticos")
          caso 15
               escreval(codigo,"-Limpeza e Utensílios domésticos")
               
   outrocaso
            escreval("Você digitou ",codigo, ". Código não reconhecido")
   fimescolha



Fimalgoritmo