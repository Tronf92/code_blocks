#include <stdio.h>
#include <conio.h>
void main (void)
{
    int age,x=2013,year;
    char c[100];
    printf("Hello and welcome! What is your name?\n");
    scanf("%s",&c);
    printf("What a beutifull name you have %s!\n",c);
    printf("Can u tell me the year u was born?\n");
    scanf("%d",&year);
    age=x-year;
    printf("Oh!U are %d years old!",age);
    getch();

}
