Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/08/2023
Var
// Se��o de Declara��es das vari�veis 
combustivel:inteiro
precodoalcool:real
precodagasolina:real
total:real
litro:real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
//At� 25 litros desconto de 2% por litro de alcool
//Acima de 25 litros,desconto de 4% por litro de alcool
//At� 25 litros,desconto de 3% por litro de gasolina
//Acima de 25 litros,desconto de 5% por litro de gasolina
 precodoalcool:= 6.59
 precodagasolina:= 3.79
 repita
  escreval("Tipo de combust�vel")
  escreval("1-�lcool")
  escreval("2-Gasolina")
  leia(combustivel)
  ate((combustivel = 1)ou(combustivel = 2))
  
  escreval("Quantidade de litros:")
  leia(litro)
  
//Para alco�l
    se(litro<=25)e (combustivel=1)entao
    total:=precodoalcool*(litro*(1-(2/100)))
   escreval("Valor total � pagar:R$",total)
   senao
   se(litro>25)e (combustivel=1)entao
   total:=precodoalcool*(litro*(1-(4-100)entao
  escreval("Valor total � pagar:R$",total)
   senao
 //Para Gasolina
 se(litro<=25)e(combustivel=2)entao
 total:= precodagasolina*(litro*(1-(4-100))
 escreval("Valor total � pagar:R$",total)
 senao
 se(litro>25)e(combustivel=2)entao
 total:=precodagasolina*(litro(1-(3/100)))
 escreval("Valor total � pagar:R$",total)
    fimse
    fimse
    fimse
fimse
Fimalgoritmo