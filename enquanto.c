#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int nota;
    float media;
    float soma = 0;
    for (i = 0; i < 2; i++)
    {
        do
        {
            printf("Digite a nota do aluno:");
            scanf("%d", &nota);
        } while (nota < 0 || nota > 10);
        soma += nota;
    }
    media = soma / i; // i=2
    printf("Media:%1.f/n", media);
    return 0;
}
