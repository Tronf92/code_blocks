#include <stdio.h>
#include <conio.h>
void main(void)
{
    int i,a,b,c,rest;
    printf("a=\n");
    scanf("%d",&a);
    printf("b=\n");
    scanf("%d",&b);
    printf("c=\n");
    scanf("%d",&c);
    for (i=a;i<=b;i++){
        rest=i%c;
        if (rest==0){printf ("%d ",i);
        }



    }


    getch();

}
