#include <stdio.h>
#include <conio.h>
void main (void)
{int a;
printf("Introdu un numar intre 1 si 5");
scanf ("%d",&a);
switch(a){
            case 1:
                    printf("unu");
                    break;
            case 2:
                    printf("doi");
                    break;
            case 3:
                    printf ("trei");
                    break;
            case 4:
                    printf ("patru");
                    break;
            case 5:
                    printf("cinci");
                    break;
            default:
                    printf("%d este in afara intervalului!",a);
                    }
getch();N
}

