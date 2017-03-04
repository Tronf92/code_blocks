#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>

void main (void)
{
    int a,choice,b;
    char c[80];
    a=100;
    printf("Please enter your name:");
    fflush(stdin);
    gets(c);
    printf("Welcome %s!Would you like to play my game?\nAll u have to do is guess my number!",c);
    printf("1.Yes\t2.No");
    scanf("%d",&choice);
    if (choice==1){
        do{
            printf("Please enter your number!");
            scanf("%d",&b);
            if (b!=a){ do{
                printf("Wrong!Try again!");
                scanf("%d",&b);
                }
                while(b!=a);
                }
            else{
                printf("Correct!Would u like to play again?\n1.Yes\t2.No");
                scanf("%d",&choice);
                a+=10;
                }
            if (choice==2){
                printf("Goodbye");
                break;
            }

                    }
        while(choice==1);
            }
    else {
        printf("Goodbye!");
    }
        }








