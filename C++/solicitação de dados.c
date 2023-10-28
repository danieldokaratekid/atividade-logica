#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaração de variaveis.
    int idade;
    float peso;
    char sexo;
    char nome[300];

    // solicitando dados do usuario
    printf("Digite seu nome: \n");
    gets(nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    fflush(stdin); // limpa o cachê de input

    printf("Digite seu sexo(F/M): \n");
    scanf("%c", &sexo);

    system("cls || clear"); // usado pra limpar o terminal

    // exibindo os dados pro usuario
    printf("Nome: %s.\n", nome);
    printf("Idade: %d anos.\n", idade);
    printf("Peso: %f KG. \n", peso);
    printf("Sexo: %c. \n", sexo);
    return 0;
}
