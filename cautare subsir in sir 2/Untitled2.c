//cautare KMP(Kunth-Morris-Pratt)
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main (void)
{
    char sir[100],subsir[100];
    int lungimeSir,lungimeSubSir;

    printf("Introduceti un sir:");
    fflush(stdin);
    gets(sir);
    printf("Introduceti subsirul cautat:");
    fflush(stdin);
    gets(subsir);
    lungimeSir=strlen(sir);
    lungimeSubSir=strlen(subsir);
    int i,j,k,deplasari[100];
    //precompilare model
    j=0;
    k=-1;
    deplasari[0]=-1;
    while (j<(lungimeSubSir-1)){
        while ((k>=0)&&(subsir[j]!=subsir[k])){
            k=deplasari[k];
        }
        j++;
        k++;
        if (subsir[j]==subsir[k]){
            deplasari[j]=deplasari[k];
        }
        else {
            deplasari[j]=k;
        }
    }
    //cautare subsir
    i=0;
    j=0;
    while ((j<lungimeSubSir)&&(i<lungimeSir)){
        while ((j>=0)&&(sir[i]!=subsir[j])){
            j=deplasari[j];
        }
        j++;
        i++;
    }
    if (j==lungimeSubSir){
        printf("Subsirula s-a gasit la pozitia:%d din sir.\n",i-lungimeSubSir);
    }
    else {
        printf("Subsirul nu s-a gasit in sir.\n");
    }
    getch();
}
