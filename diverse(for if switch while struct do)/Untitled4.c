#include <stdio.h>
#include <conio.h>
using namespace std;


struct bilet{
    char destinatie[100];
    double pret;
    int nrLoc;
    char numePersoana[100];
};


int main ()
{
    bilet b1,*b2= NULL;

    printf("Biletul 1:\n");
    printf("\tDestinatia:");
    fflush(stdin);
    gets(b1.destinatie);
    printf("\tPret:\n");
    scanf("%lf",&b1.pret);
    printf("\tNumar loc:");
    scanf("%d",&b1.nrLoc);
    printf("\tNumele persoanei:");
    fflush(stdin);
    gets(b1.numePersoana);

    b2->new bilet;
    printf("\nBiletul 2:\n");
    printf("\tDestinatia:");
    fflush(stdin);
    gets(b2->destinatie);
    printf("\tPret:");
    scanf("%lf",&b2->pret);
    printf("\tNumar loc:");
    scanf("%d",&b2->nrLoc);
    printf("\tNumele persoanei:");
    fflush(stdin);
    gets(b2->numePersoana);

    printf("\n\nCost bilete: %g RON\n",b1.pret+b2->pret);

    delete b2;

    printf("\n\n-----------\nApasa o tasta...");
    getch();

}
