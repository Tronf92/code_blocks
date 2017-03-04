#include <stdio.h>
#include <conio.h>
void main(void)
{
    int i,n,a,ultimulnr;
    printf("Introduceti n=");
    scanf("%d",&n);
    if (n<=0){
        printf("Trebuia sa dati o valoare >0!\n");

    }
    else {
        printf("a=");
        scanf("%d",&a);
        for (i=1;i<=n;i++) {
            do{
                ultimulnr=a;
                printf("a=");
                scanf("%d",&a);
                if (a==ultimulnr) {
                    printf ("Numarul coincide cu cel anterior!\n");
                }}
                while (a==ultimulnr);

        }
    }
    getch();
}
