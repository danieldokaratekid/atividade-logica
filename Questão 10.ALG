Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/08/2023
Var
// Seção de Declarações das variáveis 
combustivel:inteiro
precodoalcool:real
precodagasolina:real
total:real
litro:real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
//Até 25 litros desconto de 2% por litro de alcool
//Acima de 25 litros,desconto de 4% por litro de alcool
//Até 25 litros,desconto de 3% por litro de gasolina
//Acima de 25 litros,desconto de 5% por litro de gasolina
 precodoalcool:= 6.59
 precodagasolina:= 3.79
 repita
  escreval("Tipo de combustível")
  escreval("1-Álcool")
  escreval("2-Gasolina")
  leia(combustivel)
  ate((combustivel = 1)ou(combustivel = 2))
  
  escreval("Quantidade de litros:")
  leia(litro)
  
//Para alcoól
    se(litro<=25)e (combustivel=1)entao
    total:=precodoalcool*(litro*(1-(2/100)))
   escreval("Valor total á pagar:R$",total)
   senao
   se(litro>25)e (combustivel=1)entao
   total:=precodoalcool*(litro*(1-(4-100)entao
  escreval("Valor total á pagar:R$",total)
   senao
 //Para Gasolina
 se(litro<=25)e(combustivel=2)entao
 total:= precodagasolina*(litro*(1-(4-100))
 escreval("Valor total á pagar:R$",total)
 senao
 se(litro>25)e(combustivel=2)entao
 total:=precodagasolina*(litro(1-(3/100)))
 escreval("Valor total á pagar:R$",total)
    fimse
    fimse
    fimse
fimse
Fimalgoritmo