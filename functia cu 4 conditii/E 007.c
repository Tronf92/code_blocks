#include <stdio.h>
#include <conio.h>
void main(void)
{int x,fx;
printf ("x=");
scanf ("%d",&x);
if (x<0) {fx=3*x*x*x+6*x*x+x+2;}
if ((x>=0)&& (x<10)){fx=5*x*x-4*x+7;}
if ((x>=10) && (x<100)) {fx=3*x+2;}
if (x>=100) {fx=0;}
printf ("f(%d)=%d",x,fx);
getch();
}
