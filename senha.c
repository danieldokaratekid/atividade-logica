#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    char loginSalvo[200] = "Marta";
    char senhaSalva[200] = "senai123";
    char login[200];
    char senha[200];

    printf("Digite seu login: ");
    gets(login);
    printf("Digite sua senha:");
    gets(senha);
    if (strcmp(loginSalvo, login) == 0 && strcmp(senhaSalva, senha) == 0)
    {
        printf("Bem vindo!");
    }
    else
    {
        printf("Login ou senha inválidos!");
        
    }
    getchar(); // pausa no windows e linux
        return 0;
}