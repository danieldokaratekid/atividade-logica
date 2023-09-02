Algoritmo "Questão 4"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Daniel Augusto
// Data atual  : 01/09/2023
Var
// Seção de Declarações das variáveis 
 quantidadedemorango1:real
 quantidadedemacas1:real
 multiplicacao1:real
 multiplicacao2:real
 multiplicacao3:real
 multiplicacao4:real
 quantidadedemorango2:real
 quantidadedemacas2:real
 precomorango1:caracter
 precomaca1:caracter
 precomorango2:caracter
 precomaca2:caracter
 precocertomorango:real
 precocertomaca:real
 precototal:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
//Até 5kg de Morango será 2,50 reais o kilo
//Até 5 kg de Maçã será 1,80 reais o kilo
//Mais de 5kg de Morango será 2,20 reais o kilo
//Mais de 5kg de Maçã será 1,50 reais o kilo
//Se comprar 8kg Ou valor=25 reais haverá desconto de 10%

  escreval("Digite a quantidade de morango em kg:")
  leia(quantidadedemorango1)
  escreval("Digite a quantidade de maças em kg:")
  leia(quantidadedemacas1)
 
   multiplicacao1<- (quantidadedemorango1 * 2.50)
   multiplicacao2 <- (quantidadedemorango2 * 2.20)

   multiplicacao3<-(quantidadedemacas1 * 1.80)
   multiplicacao4<-(quantidadedemacas2 * 1.50)
  
    escreval("quantidadedemorango1:",quantidadedemorango1)
    escreval("quantidadedemacas1:",quantidadedemacas1)
    escreval("multiplicacao1:",multiplicacao1)
    escreval("multiplicacao2",multiplicacao2)
    escreval("multiplicacao3",multiplicacao3)
    escreval("multiplicacao4",multiplicacao4)
    escreval("quantidadedemorango2:",quantidadedemorango2)
    escreval("quantidadedemacas2:",quantidadedemacas2)
    escreval("precomorango1:",precomorango1)
    escreval("precomaca1:",precomaca1)
    escreval("precomorango2:",precomorango2)
    escreval(" precomaca2:",precomaca2)
    escreval("quantidadedemorango1:",quantidadedemorango1)
    escreval("quantidadedemacas1:",quantidadedemacas1)
    escreval("quantidadedemorango1:",quantidadedemorango1)
    escreval("quantidadedemorango2:",quantidadedemorango2)
 
    se(quantidadedemorango1>=5)entao
    precocertomorango(precomorango1)
    precocertomorango(precomorango2)

    se(quantidadedemaca1>=5)entao
   precocertomaca(precomaca1)
   precocertomaca(precomaca2)
   precototal-<(precocertomaca+precocertomorango)
 
   se precototal > 25 ou (macas + morangos) > 8:
    ("Preço final: ", (precototal - (precototal * 0.1)))
   se nao
    ("Preço final: ", precototal)
     fimse
     fimse
     fimse
     fimse
     Fimalgoritmo