#include <stdio.h>
#include <conio.h>
void main (void)
{int x,fx;
printf("x=");
scanf ("%d", &x);
if (x<0){fx=8*x*x+9*x+10;}
else{
if (x==0){fx=17;}

else{fx=5*x+19;}
}
printf ("f(%d)=%d",x,fx);
getch();
}
