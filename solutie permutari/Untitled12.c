#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

int n, vector[100];

void AfisezSolutie(){
    int i;
    printf("(");
    for(i=0;i<n;i++){
        printf("%d",vector[i]);
        if(i<(n-1))
            printf(",");
    }
    printf(")");
}

bool ExistaDeja(int indice, int element)
{
    int i;
    for(i=0;i<indice;i++){
        if (vector[i]==element)
            return true;
    }
    return false;
}

void Permutari(int indice)
{
    int i;
    for (i=1;i<=n;i++){
        if (ExistaDeja(indice,i))
            continue;
        vector[indice]=i;
        if (indice<(n-1))
            Permutari(indice+1);
        else
            AfisezSolutie();
    }
}

void main(void)
{
    printf("Introduceti n=");
    scanf("%d",&n);
    Permutari(0);

    printf("\n\n-------------\nApasa o tasta...");
    getch();
}
