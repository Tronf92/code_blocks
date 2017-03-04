#include <stdio.h>
#include <conio.h>
void main(void)
{
int x,fx;
printf("x=");
scanf("%d",&x);
if (x<0){fx=x*x;}
else {fx=2*x+3;}
printf("f(%d)=%d",x,fx);
printf("\n-----------\n");

}
