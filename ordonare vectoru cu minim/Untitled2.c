#include <stdio.h>
#include <conio.h>
void main(void)
{
    int i,j,n,a[200];
    printf("Introduceti nr de elemente:n=");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        }
    int temp,valMin,pozMin;
    for (i=0;i<(n-1);i++){
        valMin=a[i];
        pozMin=i;
        for (j=(i+1);j<n;j++){
            if (a[j]<valMin){
                valMin=a[j];
                pozMin=j;
                }
            }
        temp =a[i];
        a[i]=valMin;
        a[pozMin]=temp;
        }
    printf("Vectorul ordonat:\n");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);}
    getch();
}
