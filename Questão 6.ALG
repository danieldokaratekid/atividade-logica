Algoritmo "Questão 6"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Daniel Augusto
// Data atual  : 31/08/2023
Var
// Seção de Declarações das variáveis
nome:caracter
n1:real
n2:real
media:real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Digite seu nome:")
leia(nome)
escreval("Digite sua primeira nota:")
leia(n1)
escreval("Digite sua segunda nota:")
leia(n2)
escreval("Sua média é:")
media<-(n1+n2/2)
escreval("nome:",nome)
escreval("n1:",n1)
escreval("n2:",n2)
escreval("media:",media)
se(media=6)entao
escreval("O Aluno está aprovado")
senao(media=4)entao
escreval("O Aluno está em recuperação")
fimse
senao(media= <4)se
fimse
escreval("O Aluno está reprovado")
fimalgoritmo