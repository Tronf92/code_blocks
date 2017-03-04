#include <stdio.h>
#include <conio.h>
void main (void)
{
    int a,i,b,c;
    b=0;
    c=0;
    i=0;
    while(a!=0){
        printf("Introduceti a=");
        scanf ("%d",&a);
        i++;
        if (a!=0){
        if (a%2==0){
            b++;
            printf ("Numere pare:%d\n ",b);



        }
        else {
            c++;
            printf ("Numere impare %d\n ",c);

        }

    }}
    printf("Total nr pare %d ",b);
    printf ("Total numere impare %d ",c);
    getch();

}
