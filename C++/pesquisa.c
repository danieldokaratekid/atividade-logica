#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;
    int idade;
    int maiorIdade = 0;
    int menorIdade = 999;
    float salario;
    char sexo;
    float somaSalario = 0;
    float quantidadeSalario = 0;
    float mediaSalarios = 0;
    int mulheres5k = 0;

    do {
        printf("=== Pesquisa Municipal == \n");
        printf("1 - Adicionar pessoa \n");
        printf("2 - Sair e mostrar resultados \n");
        printf("Digite a opção desejada: ");
        scanf("%d",&opcao);

        switch (opcao) {
        case 1 :
            printf("\n\nDigite a idade: ");
            scanf("%d",&idade);
           
            fflush(stdin); // Limpa cache de input.

            printf("Informe o sexo: ");
            scanf("%c",&sexo);

            printf("Informe o salário: ");
            scanf("%f",&salario);

            maiorIdade = idade > maiorIdade ? idade : maiorIdade;
            menorIdade = idade < menorIdade ? idade : menorIdade;

            somaSalario += salario;
            quantidadeSalario++;

            sexo = toupper(sexo);
            if (sexo == 'F' && salario > 5000) {
                mulheres5k++;
            }
           
            system("cls || clear");
            break;
        case 2:
            mediaSalarios = somaSalario / (float)quantidadeSalario;

            system("cls || clear");
            printf("=== Pesquisa Municipal == \n");
            printf("Maior idade: %d \n", maiorIdade);
            printf("Menor idade: %d \n", menorIdade);
            printf("Média de salários: R$ %.2f \n", mediaSalarios);
            printf("Quantidade de mulheres com salários acima de 5 mil: %d \n", mulheres5k);
           
            break;
        default:
            printf("Opção inválida! \n");
            sleep(5);
            system("cls || clear");
        }

    } while (opcao != 2);
   
    return 0;
}