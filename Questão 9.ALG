Algoritmo "Questão 9"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/08/2023
Var
// Seção de Declarações das variáveis 
 emprestimo:real
 renda:real
 prestacoes:real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite qual o valor do empréstimo:")
leia(emprestimo)
escreval("Digite sua renda passiva:")
leia(renda)
escreval("Quanto de prestação será pago:")
leia(prestacoes)
emprestimo<-10*renda
prestacoes<-renda*0.3
escreval("emprestimo",emprestimo)
escreval("renda",renda)
escreval("prestacoes",prestacoes)
se(emprestimo=renda*10)entao
escreval("Empréstimo estará concedido")
senao(renda<emprestimo*10)
fimse




Fimalgoritmo
//informar se o empréstimo pode ou não ser concedido