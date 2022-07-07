Algoritmo "Calculo para saber o peso ideal"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 08/03/2022
Var
// Seção de Declarações das variáveis 

   indice,h: real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Agora vamos calcular o peso ideal teórico.")
   escreval("Digite o genero: 2 para Homem ou 1 se for Mulher.")
   leia(indice)
   escreval("Digite sua altura em metros Ex: 1,75")
   leia(h)
   
   se     (indice>1)entao
          escreval ("O peso ideal é: ", (72.7*h)-58 :2:2, "Kg")
          
          senao
               escreva ("O peso ideal é: ",(62.1*h)-44.7 :2:2,"Kg" )
   fimse



Fimalgoritmo