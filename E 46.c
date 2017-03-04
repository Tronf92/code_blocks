#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main(void)
{
    char s[100];
    printf("Introduceti un sir de caractere:");
    gets(s);

    int i,c,aparitii[256];

    for (i=0;i<256;i++){
        aparitii[i]=0;
        }
    for (i=0;i<strlen(s);i++){
        int c= (int)s[i];
        aparitii[c]++;
        }
    for (i=0;i<256;i++){
        if (aparitii[i]>0){
            printf("Caracterul %c apare de %d ori\n",(char)i,aparitii[i]);
            }
        }

}
