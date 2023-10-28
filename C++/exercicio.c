#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int idade;
    int menoridade = 999;
    int maioridade = 0;
    char sexo;
    float quantidadesalario = 0;
    float salario;
    float somasalario = 0;
    float mediasalario = 0;
    int mulheres5k = 0;
    int opcao;
    // media salarial do grupo
    // maior e menor idade do grupo
    // quantidade de mulheres com salário acima de 5000
    printf("Pesquisa Municipal/n");
    printf("1-Adicionar Pessoa/n");
    printf("2-Sair do programa/n");
    printf("Selecione a opção desejada/n");
    scanf("%d", &opcao);

    do
    {
        switch (opcao)
        {
        case 1:

        default:
            break;
            printf("Digite a sua idade");
            scanf("%d", &idade);
            printf("Digite seu sexo");
            scanf("%c", &sexo);
            printf("Digite seu salário");
            scanf("%f", &salario);
            maioridade = idade > maioridade ? idade : maioridade;
            menoridade = idade < menoridade ? idade : menoridade;

            somasalario += salario;
            quantidadesalario++;

            sexo = toupper(sexo);
            if (sexo == 'F' && salario > 5000)
            {
                mulheres5k++;
            }
        case 2:
            mediasalario = somasalario / (float)quantidadesalario;
            printf("Pesquisa Municipal/\n");
            printf("Maior idade :%d\n", maioridade);
            printf("Menor idade:%d\n", menoridade);
            printf("Mediasalario:%2.f\n", mediasalario);
            printf("Mulheres com mais de 5 mil reais :%d\n", mulheres5k);

            printf("Opção Inválida\n");
           
        }
    } while (opcao != 2);
return 0;
}