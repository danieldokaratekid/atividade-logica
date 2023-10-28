#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
 {
    setlocale(LC_ALL,"portuguese");
   char sexo;
   float altura;
   float pesoIdeal;

    printf("Digite seu gênero");
    scanf("%c",&sexo);
    fflush(stdin);
    printf("Digite sua altura");
    scanf("%d",&altura);
    sexo=toupper(sexo);
    switch(sexo){
        case 'M':
        pesoIdeal = (72.7 * altura)- 58;
        break;
        case 'F':
        pesoIdeal=(62.1 * altura)-44.7;
        break;
        printf("Opção inválida");
        printf("Peso ideal:%.2f kg.\n",pesoIdeal);
        getchar();
        return 0;
    }

