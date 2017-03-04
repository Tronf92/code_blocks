#include <stdio.h>
#include <stdlib.h>
#define NMAX 100
#define MAXNUM 2147483647
int tab[NMAX]; //tabloul de intregi
//functie care returneaza minimul a doua valori

int minim(int x, int y){
    if (x <= y) return x;
    else return y;
}

//functia recursiva care gaseste minimul unui tablou de lungime n

int tab_min(int dim){
    if(dim>0) {
        return(minim(tab[dim],tab_min(dim-1)));
    }
    else return(tab[0]);
}
int main(){
    int n,i;
    printf("Introduceti numarul de elemente a tabloului");
    scanf("%d",&n);
    printf("introduceti elementele tabloului\n");
    for (i=0;i<n;i++){
        printf ("\n tab[%d]=",i);
        scanf("%d",&tab[i]);
    }
    printf("Minimul tabloului:\n");
    for (i=0;i<n;i++){
        printf("%d ",tab[i]);
        if((i+1)%10==0) printf("\n");
    }
    printf("\n ESTE= %d",tab_min(n-1));
    return 0;
}


