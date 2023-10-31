#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
float numeroaleatorio;
float menornumero;
float maiornumero;
int numero,numeroCerto;
do{ 
numeroCerto=rand()%10;
printf("Adivinhe que número está sendo impresso:");
scanf("%d",&numeroaleatorio);
getch();
} while(numero!=numeroCerto);
printf("\nACERTOU!");
return 0;
}







