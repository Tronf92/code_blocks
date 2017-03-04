#include <stdio.h>
#include <conio.h>
void main (void)
{
    int i,n;
    double suma=0.0;
    printf("n=");
    scanf("%d",&n);
    for (i=1;i<=n; i++){
            printf("S=%g",suma);
            suma=suma + (double)i*(i+1)/((double)i*i);
            printf("+%g=%g\n",(double)i*(i+1)/((double)i*i),suma);}
    printf("Suma este: %g",suma);
    getch();
}
