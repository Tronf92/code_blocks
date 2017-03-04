#include <stdio.h>
#include <conio.h>
void main (void)
{int x,fx;
printf ("Introdu x=");
scanf ("%d",&x);
if (x<-25){fx=(x-2)*(x+2);}
if (x==-25) {fx=x*x*(x-4);}
if ((x>=-24) && (x<=10)) {fx=x;}
if (x==11) {fx=2*x;}
if (x>11) {fx=x*x*x;}
printf("f(%d)=%d",x,fx);
getch();
}
