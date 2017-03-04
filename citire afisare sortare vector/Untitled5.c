#include <stdio.h>
#include <conio.h>

void AfisareMeniu(){
    printf("1.Citire vector.\n");
    printf("2.Afisare vector.\n");
    printf("3.Sortare prin insertie.\n");
    printf("4.Sortare prin selectie.\n");
    printf("5.Inversare vector.\n");
    printf("6.Terminare.\n");
}

void CitireVector(int v[],int n){
    int i;
    for (i=0;i<n;i++){
        printf("Elementul %d:",i);
        scanf("%d",v[i]);
    }
}

void AfisareVector(int v[],int n){
    int i;
    printf("Vectorul:");
    for(i=0;i<n;i++){
        printf("%d",v[i]);
    }
    printf("\nApasa o tasta...\n ");
    getch();
}

void SortarePrinInsertie(int v[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=v[i];
        j=i-1;
        while ((v[j]>temp)&&(j>=0)){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=temp;
    }
}

void SortarePrinSelectie(int v[],int n){
    int i,j,temp,valMin,pozMin;
    for(i=0;i<n;i++){
        valMin=v[i];
        pozMin=i;

        for(j=(i+1);j<n;j++){
            if (v[j]<valMin){
                valMin=v[j];
                pozMin=j;
            }
        }
        temp=v[i];
        v[i]=valMin;
        v[pozMin]=temp;
    }
}

void InversareVector(int v[],int n){
    int temp,i;
    for(i=0;i<(n/2);i++){
        temp=v[i];
        v[i]=v[n-i-1];
        v[n-i-1]=temp;
    }
}

void main(void){
    int x,n=0,v[100],s;
    do{
        AfisareMeniu();
        printf("Introduceti optiunea dvs.:");
        scanf("%d",&x);

        switch(x){
        case 1:
            printf("Dimens. vectorului:");
            scanf("%d",&n);
            CitireVector(v,n);
            break;
        case 2:
            AfisareVector(v,n);
            break;
        case 3:
            SortarePrinInsertie(v,n);
            printf("Vectorul a fost sortat!\nApasa o tasta!\n");
            getch();
            break;
        case 4:
            SortarePrinSelectie(v,n);
            printf("Vectorul a fost sortat!\nApasa o tasta!\n");
            getch();
            break;
        case 5:
            InversareVector(v,n);
            printf("Vectorul a fost inversat!\nApasa o tasta!");
            getch();
        case 6:
            break;
        default:
            printf("Optiune gresita!\nApasa o tasta!\n");
            getch();
            break;
            }
    }while (x!=6);
    printf("\n\n-----------------\nApasa o tasta...");
    getch();
}
