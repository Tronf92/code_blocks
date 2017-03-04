#include <stdio.h>
#include <conio.h>
void main(void)
{
    int a[200],b[200],i,j,n;
    printf("Introduceti nr de elemente a:");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<(n-1);i++){
        b[2*i]=a[i];
        b[2*i+1]=a[i]%a[i+1];
    }
    b[2*n-2]=a[n-1];
    for (i=0;i<(2*n-1);i++){
        printf("b[%d]=%d\n",i,b[i]);
    }
}
