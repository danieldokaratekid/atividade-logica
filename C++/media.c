#include <stdio.h>
#include <stdlib.h>
   int main()
   {
    int primeiraNota, segundaNota, media;
     printf("Digita sua primeira nota:\n");
     scanf("%d", &primeiraNota);
    printf("Digita sua segunda nota:\n");
    scanf("%d",&segundaNota);

    media=(primeiraNota + segundaNota)/2;
    printf("Media:%d\n",media);

}
