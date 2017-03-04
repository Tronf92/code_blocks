#include <stdio.h>
#include <conio.h>
void main (void)
{
    int i,j,n,a[200];
    printf("Introduceti nr de elemente:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        }
    int temp,ls=0,ld=n-1,k;
    while (ls<ld){
        for (i=ls;i<ld;i++){
            if (a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                k=i;
                }
            }
        ld=k;
        for (i=(ld-1);i>=ls;i--){
            if (a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                k=i;
                }
            }
        ls=k+1;
        }
    printf("Vectorul ordonat:\n");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
        }
    getch();
}
