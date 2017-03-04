#include <stdio.h>
#include <conio.h>
void main(void)
{
    int i,j,n,a[200],b[200];
    printf("introduceti nr de elemente n=");
    scanf("%d",&n);
    printf("introduceti elemente de la 0 la %d fara duplicate!\n",n);
    for (i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d ",&a[i]);
        }
    for (i=0;i<n;i++)
        {b[a[i]]=a[i];}

    for (i=0;i<n;i++){
        a[i]=b[i];}
    printf("Vectorul ordonat:\n");
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);}
    getch;
}
