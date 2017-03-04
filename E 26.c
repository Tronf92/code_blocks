#include <stdio.h>
#include <conio.h>
void main(void)
{
    int i,n,a,maxim=-1;
    printf("Introduceti n=");
    scanf ("%d",&n);
    for (i=0;i<=n;i++){
        printf("Introduceti un nr pozitiv:");
        scanf("%d",&a);
        if (a<0){
            printf("Nu aveti voie sa introduceti nr negative!\n");
            continue;
        }
        if (a>maxim){
            maxim=a;
        }
    }
    if (maxim ==-1)
        printf("Nu ati introdus nici un element!\n");
    else
        printf("Maximul numerelor:%d",maxim);
    getch;

}
