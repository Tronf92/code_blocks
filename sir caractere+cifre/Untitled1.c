#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void main (void)
{
    char s[100];
    int i;
    printf("Introduceti un sir de caractere:");
    gets(s);

    printf("Sirul are %d caractere!\n",strlen(s));
    bool doarCifre=true;
    for(i=0;i<strlen(s);i++){
        if((s[i]<'0')|| (s[i]>'9')){
            doarCifre=false;
            break;
            }
        }
    if(doarCifre){
        long nr=atol(s);
        printf("numar intreg:%ld",nr);
        }
    else {
        printf("nu este numar!");
        }
    getch();
}
