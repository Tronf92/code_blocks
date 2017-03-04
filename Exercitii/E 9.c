#include <stdio.h>
#include <conio.h>
void main (void)
{
    int i,n;
    double suma=0.0;
    printf("n=");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
            suma=suma+(double)i/(double)(i+1)*3;

    }
    printf("suma este %g",suma);
    getch();



}
