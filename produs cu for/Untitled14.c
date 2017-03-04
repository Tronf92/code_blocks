#include <stdio.h>
#include <conio.h>
void main(void)
{
    int i,n,produs=1;
    printf("n=");
    scanf ("%d",&n);
    for (i=1;i<=n;i++){
        produs=produs*i;
    }
    printf("Produsul este:%d",produs);
    getch();

}
