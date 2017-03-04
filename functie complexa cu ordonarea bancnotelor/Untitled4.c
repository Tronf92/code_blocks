#include <stdio.h>
#include <conio.h>

void AfisareMeniu(){
    printf("1.Introducere bancnote disponibile.\n");
    printf("2.Afisare bancnote disponibile.\n");
    printf("3.Calcul suma disponibila:\n");
    printf("4.Terminare.\n");

}

void IntroducereBancnote(int v[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Bancnota %d:",i+1);
        scanf("%d",&v[i]);
    }
}

void AfisareBancnote(int v[],int n){
    int i;
    printf("Bancnote disponibile:");
    for (i=0;i<n;i++){
        printf("%d",v[i]);
    }
    printf("\nApasa o tasta...\n");
    getch();
}

void Calcul(int v[],int n,int suma){
    int i,rest,cat;

    printf("\n%d = ",suma);
    for(i=0;i<n;i++){
        cat=suma/v[i];
        if (cat>0){
            printf("(%d*%d)+",cat,v[i]);
            suma -=(v[i]*cat);
        }
    }
    printf("un rest de %d\nApasa o tasta!",suma);
    getch();
}

void main (void){
    int x,n=0,v[100],s;
    do{
        AfisareMeniu();
        printf("Introduceti optiunea dvs.:");
        scanf("%d",&x);

        switch (x){
        case 1:
            printf("Numar de bancnote disponibile:");
            scanf("%d",&n);
            IntroducereBancnote(v,n);
            break;
        case 2:
            AfisareBancnote(v,n);
            break;
        case 3:
            printf("Introduceti o suma de bani:");
            scanf("%d",&s);
            Calcul(v,n,s);
            break;
        case 4:
            break;
        default:
            printf("Optiune gresita!");
            getch();
            break;
        }
    }while (x!=4);
    printf("\n\n----------------\nApasa o tasta...");
    getch();
}
