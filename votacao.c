#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade;
    char resultado[200];

    printf("Digite sua idade:");
    scanf("%d", &idade);
    if (idade < 18 || idade > 65)
    {
        strcpy(resultado, "Não é obrigado a votar");
        strcpy(resultado, "É obrigado a votar");
        printf("%s", resultado);
        
    }
    else
    {
        strcpy(resultado, "Não é obrigado a votar");
        printf(resultado);
        getchar(); // pausa no windows e linux
        return 0;
    }
}