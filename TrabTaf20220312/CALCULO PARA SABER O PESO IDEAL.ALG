Algoritmo "Calculo para saber o peso ideal"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 08/03/2022
Var
// Se��o de Declara��es das vari�veis 

   indice,h: real


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreval("Agora vamos calcular o peso ideal te�rico.")
   escreval("Digite o genero: 2 para Homem ou 1 se for Mulher.")
   leia(indice)
   escreval("Digite sua altura em metros Ex: 1,75")
   leia(h)
   
   se     (indice>1)entao
          escreval ("O peso ideal �: ", (72.7*h)-58 :2:2, "Kg")
          
          senao
               escreva ("O peso ideal �: ",(62.1*h)-44.7 :2:2,"Kg" )
   fimse



Fimalgoritmo