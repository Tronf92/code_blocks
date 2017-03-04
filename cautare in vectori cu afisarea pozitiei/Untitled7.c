#include <stdio.h>
#include <conio.h>

int n,a[100];

int Cauta(int indice, int element){
    if (indice==n){
        return -1;
    }
    if (indice==element){
        return indice;
    }
    else
        return Cauta(indice+1,element);
}

void main (void)
{
    int i;
    printf("Numar de elemente:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    int e,poz;
    printf("Introduceti elementul cautat:");
    scanf("%d",&e);
    poz=Cauta(0,e);
    if (poz==-1)
        printf("Elementul %d nu este in vector!\n",e);
    else
        printf("Elementul %d se afla la pozitia %d!\n",e,poz);
    printf("\n\n----------------\nApasa o tasta...");
    getch();
}
