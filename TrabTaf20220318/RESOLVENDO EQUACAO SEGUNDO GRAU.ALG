Algoritmo "Resolvendo Equacao Segundo Grau"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

// Descrição   : Calcula as raizes da equ. 2 grau.
// Autor(a)    : Prof. Debora Canne
// Data atual  : 31/08/2018
Var
     a,b,c,delta:real
     x1,x2:real
     

Inicio
      escreval("Vamos Calcular os coeficientes de uma equação do segundo grau.")
      escreval("")
      escreval("Então, digite o número para o coeficiente a")
      leia(a)
      escreval("Digite o número para o coeficiente b")
      leia(b)
      escreval("Agora digite o número para o coeficiente c")
      leia(c)
      escreval("===========================")
      delta <- ((b*b)-(4*a*c))
      se (delta >=0)entao
         x1 <- (-b+raizq(delta))/(2*a)
         escreval("O valor da primeira raiz, X1, é = ",x1:2:2)
         x2 <- (-b-raizq(delta))/(2*a)
         escreval("O valor da segunda raiz, X2, é = ",x2:2:2)
      senao
           escreval("Não tem raiz real para os coeficientes",a,",",b," e",c,".")
      fimse
      escreva("===========================")
Fimalgoritmo