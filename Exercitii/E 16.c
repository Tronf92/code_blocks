#include <stdio.h>
#include <conio.h>
void main(void)
{
    int a;
    printf("Introduceti a=");
    scanf("%d",&a);
    if (a<=0){printf("Introduceti numar pozitiv");}
    else { do{
        a--;
        printf ("%d \n",a);}

    while (a>0);}
    getch();

}
