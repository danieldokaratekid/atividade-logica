Algoritmo "Quest�o 9"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/08/2023
Var
// Se��o de Declara��es das vari�veis 
 emprestimo:real
 renda:real
 prestacoes:real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite qual o valor do empr�stimo:")
leia(emprestimo)
escreval("Digite sua renda passiva:")
leia(renda)
escreval("Quanto de presta��o ser� pago:")
leia(prestacoes)
emprestimo<-10*renda
prestacoes<-renda*0.3
escreval("emprestimo",emprestimo)
escreval("renda",renda)
escreval("prestacoes",prestacoes)
se(emprestimo=renda*10)entao
escreval("Empr�stimo estar� concedido")
senao(renda<emprestimo*10)
fimse




Fimalgoritmo
//informar se o empr�stimo pode ou n�o ser concedido