#include <stdio.h>
#include <conio.h>
void main(void)
{
    int i,n, rest;
    printf ("n=");
    scanf ("%d",&n);
    for (i=0;i<=n;i++){
            rest=i%2;
            if (rest==0){
                printf("%d ",i);
            }
    }
getch();

}
