Algoritmo "Quest�o 6"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Daniel Augusto
// Data atual  : 31/08/2023
Var
// Se��o de Declara��es das vari�veis
nome:caracter
n1:real
n2:real
media:real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
escreval("Digite seu nome:")
leia(nome)
escreval("Digite sua primeira nota:")
leia(n1)
escreval("Digite sua segunda nota:")
leia(n2)
escreval("Sua m�dia �:")
media<-(n1+n2/2)
escreval("nome:",nome)
escreval("n1:",n1)
escreval("n2:",n2)
escreval("media:",media)
se(media=6)entao
escreval("O Aluno est� aprovado")
senao(media=4)entao
escreval("O Aluno est� em recupera��o")
fimse
senao(media= <4)se
fimse
escreval("O Aluno est� reprovado")
fimalgoritmo