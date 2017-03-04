#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
void main(void)
{
    int i,j,n,a[200];
    printf("Introduceti nr de elemente n=");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        }
    int temp;
    bool schimbari;
    do{
        schimbari=false;
        for(i=0;i<(n-1);i++){
            if (a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                schimbari=true;
                }
            }
        }
    while (schimbari);
    printf("Vectorul ordonat:");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);}
    getch();

}
