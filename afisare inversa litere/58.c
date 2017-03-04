#include <stdio.h>
#include <conio.h>
#include <string.h>

void AfisareInversa(char sir[],int indice){
    if (indice==strlen(sir))
        return;
    AfisareInversa(sir,indice+1);
    printf("%c",sir[indice]);
}

void main (void)
{
    char sir[100];
    printf("Introduceti un sir de caractere:");
    fflush(stdin);
    gets(sir);

    printf("Scrisul invers:");
    AfisareInversa(sir,0);

    printf("\n\n------------------\nApasa o tasta...");
    getch();
}
