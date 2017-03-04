#include <stdio.h>
#include <conio.h>
void main(void)
{
    int i,n,suma=0;
    printf("n=");
    scanf("%d", &n);
    for (i=1; i<=n;i++){
        suma=suma+i;
    }
    printf("Suma este: %d",suma);
    getch();

}
