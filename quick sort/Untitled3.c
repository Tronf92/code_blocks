#include <stdio.h>
#include <conio.h>
#include <string.h>

int a[100];

void QuickSort(int stanga,int dreapta)
{
    int s,d,k,temp;
    k=a[(stanga+dreapta)/2];
    s=stanga;
    d=dreapta;
    do{
        while (a[s]<k)
            s++;
        while (a[d]>k)
            d--;
        if (s<=d){
            temp=a[s];
            a[s]=a[d];
            a[d]=temp;
            s++;
            d--;
        }
    }
    while (s<=d);

    if (stanga<d)
        QuickSort(stanga,d);
    if(dreapta>s)
        QuickSort(s,dreapta);
}

void main(void)
{
    int i,n;
    printf("Introduceti n=");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    QuickSort(0,n-1);

    printf("Vectorul ordonat:");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }

    printf("\n\n--------------------\nApasa o tasta...");
    getch();
}
