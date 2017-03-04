#include <stdio.h>
#include <conio.h>
void main (void)
{int x,fx;
printf ("Introdu x=");
scanf ("%d", &x);
if ((x<0)||(x>4)) {fx=9*x+12;}
if (x==0) {fx=5;}
if ((x>=1)&& (x<=4)) {fx=-x;}
printf ("f(%d)=%d",x,fx);
getch();
}
