#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    // Declarando variÃ¡veis
    char sexo;
    float altura;
    float pesoIdeal;
    char seuSexo[250];

    // Solicitando informaÃ§Ãµes
    printf("Informe o seu sexo: \n ");
    scanf("%c", &sexo);
    printf("Informe a sua altura: \n ");
    scanf("%f", &altura);

    int toupper(sexo);

    // Condicional
    switch (sexo)
    {
    case 'M':
        pesoIdeal = (72.7 * altura) - 58;
        strcpy(seuSexo, "Masculino");
        break;

    case 'F':
        pesoIdeal = (62.1 * altura) - 44.7;
        strcpy(seuSexo, "Feminino");
        break;

    default:
        printf("Opção inválida...\n");
    }

    system("cls || clear");

    // Informando dados ao usuÃ¡rio
    printf("Sexo: %s \n", seuSexo);
    printf("Peso ideal: %.2f \n", pesoIdeal);

    return 0;
}