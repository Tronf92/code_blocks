#include <stdio.h>
#include <conio.h>
void main(void)
{int x,fx;
printf ("Introdu x=");
scanf ("%d",&x);
if ((x<-100)|| (x>100)){fx=25*x*x-10*x;}
if (((x>=-100)&& (x<=-50)) || ((x>=-20)&& (x<=20))|| (x==99)) {fx=10*x;}
else {fx=x*x*x+x*x+x;}
printf("f(%d)=%d",x,fx);
getch();

}
