#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int nota;
    float media;
    float soma = 0;
    char resultado[200]
    for (i = 0; i < 2; i++)
    {
        do
        {
            printf("Digite a nota do aluno:");
            scanf("%d", &nota);
        } while (nota < 0 || nota > 10);
        soma += nota;
        media = soma / i;

    if( media >= 7){
strcpy(resultado,"Aprovado!")
    }
    
   else if( media >=5){
strcpy(resultado,"Recuperação!");
   
    } else{
printf("Media:%2f\n",media);
printf("Resultado:%s\n,resultado");
return 0;
    }