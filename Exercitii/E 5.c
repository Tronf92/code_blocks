#include <stdio.h>
#include <conio.h>
void main(void)
{int a;
char c;
printf ("Introduceti un numar [0...15]:");
scanf ("%d",&a);
switch(a){
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                    c='0'+a;
                    break;
            case 10:
                    c='A';
                    break;
            case 11:
                    c='B';
                    break;
            case 12:
                    c='C';
                    break;
            case 13:
                    c='D';
                    break;
            case 14:
                    c='E';
                    break;
            case 15:
                    c='F';
                    break;
            default:
                    c='?';
                    break;

}
if (c=='?') printf("EROARE:nu ati introdu un numar intre 0 si 15!");
else printf("Caracterul hexa este:%c,c");
getch();
}
