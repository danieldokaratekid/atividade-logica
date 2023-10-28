#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int soma;
    int i;
    int numero;

    for(i=1;i<=5;i++){
        printf("Digite o %d número:",i);
        scanf("%d",&numero);
        soma=soma+numero;

    }
   printf("Soma:%d:",soma);
    return 0;
