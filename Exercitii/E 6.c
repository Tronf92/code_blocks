#include <stdio.h>
#include <conio.h>
void main (void)
{
    int a;
    char c;
    printf("Introduceti un caracter [0...9] sau [A..F]");
    scanf ("%c",&c);
    switch(c){
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                        a=c-'0';
                        break;
                case 'A':
                case 'a':
                        a=10;
                        break;
                case 'B':
                case 'b':
                        a=11;
                        break;
                case 'C':
                case 'c':
                        a=12;
                        break;
                case 'D':
                case 'd':
                        a=13;
                        break;
                case 'E':
                case 'e':
                        a=14;
                        break;
                case 'F':
                case 'f':
                        a=15;
                        break;
                default:
                        a=-1;
                        break;
}
if (a==-1) printf("EROARE:nu ati introdus un caracter coret!");
else printf ("Numarul este:%d", a);
getch();
}
