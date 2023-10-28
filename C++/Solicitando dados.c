#include <stdio.h>
#include <stdlib.h>
int main(){
    int idade;
    float peso;
    char sexo;

    //solicitando dados do usuário
    printf("Digite sua idade:");
    scanf("%d",&idade);
    //exibindo dados para o usuario

    printf("Digite seu peso:");
    scanf("%f",&peso);
    fflush(stdin);//Limpa o cache de input
    
    printf("Informe seu sexo:");
    scanf("%c",&sexo);

    //Exibindo dados para o usário %
    printf("Idade:%d anos.\n",idade);
    printf("Peso:%3fkg.\n",peso);
    printf("Sexo:%c.\n",sexo);

    return 0;
}