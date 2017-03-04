#include <stdio.h>
#include <conio.h>
void main (void)
{
    int i,j,n,a[200];
    printf("Introduceti nr de elemente n=");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        }
    int temp;
    for (i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while ((a[j]>temp)&& (j>=0)){
            a[j+1]=a[j];
            j--;
            }
        a[j+1]=temp;
        }
    printf("Vectorul ordonat:");
    for (i=0;i<n;i++){
        printf("%d",a[i]);}
    getch();
    }
