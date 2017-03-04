#include <stdio.h>
#include <conio.h>
void main (void)
{
    int a,b;
    while ((a&&b)!=0){
            printf ("Introduceti a=");
            scanf ("%d",&a);
            printf ("Introduceti b=");
            scanf ("%d",&b);
            if (a==0){
                printf ("Perechea este gresita");
        }
            else {if (b%a==0){
                printf ("Perechea (%d,%d)",a,b);
            }
            }
    }
    getch();


}
