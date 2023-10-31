#include <stdio.h>
#include <stdlib.h>


int main () {
//declaração de variaveis.
int idade;
float peso; 
char sexo; 

// solicitando dados do usuario.
printf ("digite sua idade: ");
scanf ("%d",&idade);

printf ("digite seu peso: ");
scanf ("%f",&peso);

fflush (stdin) ; // limpa o cache do input.

printf ("Informe seu sexo: ");
scanf ("%c",&sexo);

system ("cls || clear"); // limpa tela

// exibindo dados para o usario.
printf("idade: %d anos. \n ",idade);
printf("peso : %.3f kg. \n ",peso);
printf("sexo : %c . \n ",sexo);

 
   return 0;  
}