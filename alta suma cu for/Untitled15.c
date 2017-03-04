#include <stdio.h>
#include <conio.h>
void main(void)
{
    int i,n;
    double suma=0.0;
    printf("n=");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        suma=suma+1.0/i;
    }
printf("Suma este %g",suma);
getch();
}
