Algoritmo "Algoritmo para ler codigo produto"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/03/2022
Var
// Se��o de Declara��es das vari�veis 

   codigo: inteiro


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...

   escreval("Algoritmo para ler c�digo de produtos")
   escreval("       ")
   escreval("Digite o c�digo do produto entre 1 e 15")

   leia(codigo)
   
   escolha(codigo)
          caso 1
               escreval(codigo,"-Alimento n�o-perec�vel")
          caso 2

               escreval(codigo,"-Alimento perec�vel")
          caso 3

               escreval(codigo,"-Alimento perec�vel")
          caso 4
               escreval(codigo,"-Alimento perec�vel")
          caso 5
               escreval(codigo,"-Vestu�rio")
          caso 6
               escreval(codigo,"-Vestu�rio")
          caso 7
               escreval(codigo,"-Higiene")
          caso 8
               escreval(codigo,"-Limpeza e Utens�lios dom�sticos")
          caso 9
               escreval(codigo,"-Limpeza e Utens�lios dom�sticos")
          caso 10
               escreval(codigo,"-Limpeza e Utens�lios dom�sticos")
          caso 11
               escreval(codigo,"-Limpeza e Utens�lios dom�sticos")
          caso 12
               escreval(codigo,"-Limpeza e Utens�lios dom�sticos")
          caso 13
               escreval(codigo,"-Limpeza e Utens�lios dom�sticos")
          caso 14
               escreval(codigo,"-Limpeza e Utens�lios dom�sticos")
          caso 15
               escreval(codigo,"-Limpeza e Utens�lios dom�sticos")
               
   outrocaso
            escreval("Voc� digitou ",codigo, ". C�digo n�o reconhecido")
   fimescolha



Fimalgoritmo