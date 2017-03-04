#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void main (void)
{
    char s[100],cuvant[100];
    int i,k;
    printf("Introduceti un sir:");
    fflush(stdin);
    gets(s);
    i=0;
    while (i<strlen(s)){
            while ((i<strlen(s))&& ((s[i]==' ')||(s[i]==',')||(s[i]=='.')||(s[i]==';')||(s[i]==':')||(s[i]=='!')||(s[i]=='?')))
                i++;
            k=0;
            while ((i<strlen(s))&&((s[i]==' ')||(s[i]==',')||(s[i]=='.')||(s[i]==';')||(s[i]==':')||(s[i]=='!')||(s[i]=='?'))){
                cuvant[k]=s[i];
                k++;
                i++;
            }
            cuvant[k]='\0';
            if (k>0)
                printf("Cuvant gasit: %s\n",cuvant);


    }
    getch();

}
