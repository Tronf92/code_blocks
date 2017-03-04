#include <stdio.h>
#include <conio.h>
void main(void)
{int x,fx;
printf ("Introdu x=");
scanf ("%d",&x);
if (x<0){fx=x-2;}
else {fx=x+2;}
printf ("f(%d)=%d",x,fx);
getch();
}
