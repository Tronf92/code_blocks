#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
void main (void)
{
    char sir[100],subsir[100];
    int i,j,indiceStart,n,ns;
    bool gasit;
    printf("Introduceti un sir:");
    fflush(stdin);
    gets(sir);
    printf("Introduceti subsirul cautat:");
    fflush(stdin);
    gets(subsir);
    n=strlen(sir);
    ns=strlen(subsir);
    indiceStart=-1;
    for (i=0;i<(n-ns+1);i++){
        gasit=true;
        for(j=0;j<ns;i++){
            if (sir[i+j]!=subsir[j]){
                gasit=false;
                break;
            }
        }
        if (gasit){
            indiceStart=i;
            break;
        }
    }
    if (indiceStart==-1){
        printf("Subsirul nu s-a gasit in sir!");
    }
    else {
        printf("Subsirul s-a gasit in sir incepand cu pozitia %d!",indiceStart);
    }
    getch();
}
