#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL, "");
    float media;
    float soma = 0;
    int numero;
    int contador=0;
    
do {
    printf("Digite o %d valor.",i+1);
     scanf("%f", &numero);
        
        if(numero >= 0){
            soma+=numero;
            contador++;
        }
    } while(numero >=0);
       media=soma/contador;
       printf("Media:%.2f \n",media);
       return 0;


        
        
    

    
    
  
    }
