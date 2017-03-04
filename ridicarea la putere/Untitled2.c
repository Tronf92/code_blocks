#include <stdio.h>
#include <conio.h>

double RidicareLaPutere(int x,int n){
    long rezultat=1;
    long i;
    for(i=0;i<n;i++){
        rezultat*=x;
    }
    return rezultat;
}

void main(void){
    int p,q;
    printf("Introduceti un numar p=");
    scanf("%d",&p);
    printf("Introduceti putereea q=");
    scanf("%d",&q);

    printf("%d la puterea %d=%g\n",p,q,RidicareLaPutere(p,q));
    printf("\n\n----------------\nApasa o tasta...");
    getch();
}
