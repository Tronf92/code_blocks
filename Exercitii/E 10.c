#include <stdio.h>
#include <conio.h>
void main (void)
{
    int i,n;
    double suma=0.0;
    printf("n=");
    scanf("%d",&n);
    printf("S=%g",suma);
    for (i=1;i<=n; i++){
            suma=suma + (double)i*(i+1)/((double)i*i);
            printf("+%g",(double)i*(i+1)/((double)i*i),suma);}
    printf("=%g",suma);
    getch();
}
