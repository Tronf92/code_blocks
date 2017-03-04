#include <stdio.h>
#include <conio.h>
void main(void)
{int a,b,r;
printf("Introduceti numarul mai mare");
scanf("%d",&a);
printf("Introduceti numarul mai mic");
scanf("%d",&b);
r=a%b;
if(r=0){printf("cmmdc=",r);}
else{a=b;b=r;r=a%b;}

printf("\n------------\n");
getch();

}
