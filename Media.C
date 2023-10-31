#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    char resultado[200];

    printf("Digite um numero");
    scanf("%d", &numero);
    
    if (numero == 10)
    {
        strcpy(resultado, "O numero é igual a 10");
    }
    else if (numero > 10)
    {
        strcpy(resultado, "Não é maior que Dez");
    }
    else
    {
        strcpy(resultado, "Não é maior que 10");
    }

    printf(resultado);
    system("pause");
    return 0;
}

/*
 *=Atribuição
 * == comparação != Diferente a != b
 */