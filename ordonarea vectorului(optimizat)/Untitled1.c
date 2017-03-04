#include <stdio.h>
#include <conio.h>
void main (void)
{
    int i,j,n,a[200],stanga,dreapta,m;
    printf("Introduceti nr de elemente n=");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        }
    int temp;
    for (i=1;i<n;i++){
        temp=a[i];
        stanga=0;
        dreapta=i-1;
        while (stanga<=dreapta){
            m=(stanga+dreapta)/2;
            if (a[m]>temp){
                dreapta=m-1;
                }
            else {
                stanga=m+1;}

            }
        for (j=(i-1);j>=stanga;j--){
            a[j+1]=a[j];
            }
        a[stanga]=temp;
        }
    printf ("Vectorul ordonat:");
    for (i=0;i<n;i++){
        printf("%d ,",a[i]);
        }
    getch();
    }
