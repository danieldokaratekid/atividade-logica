/*
Crie um algoritmo que leia 5 números inteiros e, em seguida,
mostre na tela:

A quantidade de números pares e ímpares;
A quantidade de números positivos e negativos;
A quantidade de números inseridos.
O maior e o menor número;
A média de números pares;
A média de números ímpares;
A média de todos os números inseridos;
Mostrar os números lidos na ordem inversa.
*/

#include <stdio.h>

int main()
{
    int numeros[5];
    int i;
    int pares = 0;
    int impares = 0;
    int positivos = 0;
    int negativos = 0;
    int maior = 0;
    int menor = 9999;
    int somaPares = 0;
    int somaImpares = 0;
    int somaTodosNumeros = 0;
    float mediaPares = 0;
    float mediaImpares = 0;
    float mediaTodosNumeros = 0;

    // Solicitando dados do usuário.
    for (i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);

        // Verificando pares e ímpares.
        if (numeros[i] % 2 == 0) {
            pares = pares + 1;
            somaPares = somaPares + numeros[i];
        } else {
            impares++;
            somaImpares += numeros[i];
        }

        // Verificando positivos e negativos.
        if (numeros[i] > 0) {
            positivos++;
        }

        if (numeros[i] < 0) {
            negativos++;
        }

        // Verificando maior e menor número.
        if (numeros[i] > maior) {
            maior = numeros[i];
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
        }

        // Somando todos os números.
        somaTodosNumeros = somaTodosNumeros + numeros[i];
    }

    // Evitando divisão por zero. 
    //Caso sejam inseridos apenas números ímpares.
    if (pares > 0) {
        mediaPares = somaPares / (float) pares;
    }

    // Evitando divisão por zero. 
    //Caso sejam inseridos apenas números pares.
    if (impares > 0) {
        mediaImpares = somaImpares / (float) impares;
    }

    mediaTodosNumeros = somaTodosNumeros / (float) i;

    printf("\nQuantidade de numeros pares: %d \n", pares);
    printf("Quantidade de numeros ímpares: %d \n", impares);
    printf("Quantidade de numeros positivos: %d \n", positivos);
    printf("Quantidade de numeros negativos: %d \n", negativos);
    printf("Quantidade de numeros inseridos: %d \n", i);
    printf("Maior numero: %d \n", maior);
    printf("Menor numero: %d \n", menor);
    printf("Media de numeros pares: %.1f \n", mediaPares);
    printf("Media de numeros ímpares: %.1f \n", mediaImpares);
    printf("Media de todos os numeros inseridos: %.1f \n", mediaTodosNumeros);

    printf("\nExibindo os valores em ordem inversa: \n");

    for (i = 4; i >= 0; i--) {
        printf("Numeros: %d \n", numeros[i]);
    }

    return 0;
}
