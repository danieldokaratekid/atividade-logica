Algoritmo "Questão 7"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Daniel Augusto
// Data atual  : 31/08/2023
Var
// Seção de Declarações das variáveis 
produto:caracter
precounitario:real
total:caracter
desconto:real
quantidadeadquirida:real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
//Se a quantidade<=5 o desconto será de 2%
//Se a quantidade>5 e quantidade<=10 o desconto será de 3%
//Se quantidade>10 o desconto será de 5%
escreval("Digite o produto:")
leia(produto)
escreval("Digite a quantidade:")
leia(quantidadeadquirida)
escreval("quantidadeadquirida",quantidadeadquirida)
precounitario<-5
total<-("quantidadeadquirida * preço unitário")
se(precounitario<=5 e <10)entao
desconto(5-0.02)
se(precounitario>5)entao
desconto(5-0.03)
se(precounitario>10)entao
desconto(5-0.05)

Fimalgoritmo