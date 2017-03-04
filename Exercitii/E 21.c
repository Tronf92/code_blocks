#include <stdio.h>
#include <conio.h>
void main(void)
{
    int a[200],i,j,n;
    double b[200],k;
    printf("Introduceti nr de elemente pt vectorul a:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d=",&a[i]);
        }
    b[0]=a[0];
    for (i=1;i<n;i++){
        k=0.0;
        for(j=0;j<=i;j++){
            k+=a[j];
        }
        b[i]=k/(i+1);
    }
    for (i=0;i<n;i++){
        printf("b[%d]= %g ",i,b[i]);
    }
    getch();
}
