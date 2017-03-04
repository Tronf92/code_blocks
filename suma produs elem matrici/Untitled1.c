#include <stdio.h>
#include <conio.h>
void main (void)
{
    int a[100][100],n,i,j,m;
    printf("Introduceti nr de linii n=");
    scanf ("%d",&n);
    printf("Introduceti nr de coloane m=");
    scanf("%d",&m);
    long suma=0,produs=1;
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            suma+=a[i][j];
            produs*=a[i][j];
            }
        }
    printf("Suma elementelor matricii:%ld\n",suma);
    printf("Produsul elementelor matricii:%ld\n",produs);
    getch();
}
