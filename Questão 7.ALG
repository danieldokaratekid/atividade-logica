Algoritmo "Quest�o 7"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Daniel Augusto
// Data atual  : 31/08/2023
Var
// Se��o de Declara��es das vari�veis 
produto:caracter
precounitario:real
total:caracter
desconto:real
quantidadeadquirida:real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
//Se a quantidade<=5 o desconto ser� de 2%
//Se a quantidade>5 e quantidade<=10 o desconto ser� de 3%
//Se quantidade>10 o desconto ser� de 5%
escreval("Digite o produto:")
leia(produto)
escreval("Digite a quantidade:")
leia(quantidadeadquirida)
escreval("quantidadeadquirida",quantidadeadquirida)
precounitario<-5
total<-("quantidadeadquirida * pre�o unit�rio")
se(precounitario<=5 e <10)entao
desconto(5-0.02)
se(precounitario>5)entao
desconto(5-0.03)
se(precounitario>10)entao
desconto(5-0.05)

Fimalgoritmo