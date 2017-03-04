#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMAR_MAX_CARTI 100
#define PREGATIRE 1
#define DISPONIBILA 2
#define IMPRUMUTATA 3
#define INTARZIATA 4

#define SECUNDE_IN_14_ZILE  (14*24*60*60)
char* DENUMIRI_STARI[]={" ","PREGATIRE","DISPONIBILA","IMPRUMUTATA"};

struct CARTE
{
    int cod;
    char* titlu;
    char* categorie;
    int stare;
    time_t dataImprumut;
};

struct CARTE ListaCarti[NUMAR_MAX_CARTI];

int NrCartiInBiblioteca = 0;

void Initializare()
{
    int i;
    for(i=0;i<NUMAR_MAX_CARTI;i++)
    {
        ListaCarti[i].cod=0;
        ListaCarti[i].titlu=" ";
        ListaCarti[i].categorie=" ";
        ListaCarti[i].stare=0;
        ListaCarti[i].dataImprumut=0;
    }
    NrCartiInBiblioteca=0;
}

void Adaugare(int codTemporar,char* pTitlu)
{
    ListaCarti[NrCartiInBiblioteca].cod=codTemporar;
    ListaCarti[NrCartiInBiblioteca].titlu=pTitlu;
    ListaCarti[NrCartiInBiblioteca].categorie="";
    ListaCarti[NrCartiInBiblioteca].stare= PREGATIRE;
    ++NrCartiInBiblioteca;
}

int Cautare(int cod)
{
    int index;
    for(index=0;(index<NrCartiInBiblioteca)&&(ListaCarti[index].cod!=cod);++index)
    {
        if(NrCartiInBiblioteca==index)
        {
            index=-1;
        }

    }
    return index;
}

void Catalogare(int codTemporar,int codFinal,char* pCategorie)
{
    int terminat=0;
    int pozitie=Cautare(codTemporar);
    if(-1!=pozitie)
    {
        if(PREGATIRE==ListaCarti[pozitie].stare)
        {
            ListaCarti[pozitie].cod=codFinal;
            ListaCarti[pozitie].categorie=pCategorie;
            ListaCarti[pozitie].stare=DISPONIBILA;
            terminat=1;
        }
    }
    if(!terminat)
    {
        printf("\nCatalogarea a esuat!");
    }
}

void Imprumutare(int codInventar)
{
    int terminat = 0;
    int pozitie = Cautare(codInventar);
    if(-1!=pozitie)
    {
        if(DISPONIBILA==ListaCarti[pozitie].stare)
        {
            ListaCarti[pozitie].stare=IMPRUMUTATA;
            time(&(ListaCarti[pozitie].dataImprumut));
            terminat=1;
        }
    }
    if(!terminat)
    {
        printf("\nImprumutul nu a fost efectuat");
    }
}

void Returnare(int codInventar)
{
    int terminat = 0;
    int pozitie = Cautare(codInventar);
    if(-1!=pozitie)
    {
        if((IMPRUMUTATA==ListaCarti[pozitie].stare)||(INTARZIATA==ListaCarti[pozitie].stare))
        {
            ListaCarti[pozitie].stare=DISPONIBILA;
            terminat=1;
        }
    }
    if(!terminat)
    {
        printf("\nReturnarea nu a fost efectuata");
    }
}

void Inventar(time_t time)
{
    int i;
    for(i=0;i<NrCartiInBiblioteca;i++)
    {
        if(IMPRUMUTATA==ListaCarti[i].stare)
        {
            time_t durataImprumut=time-ListaCarti[i].dataImprumut;
            if(durataImprumut>SECUNDE_IN_14_ZILE)
            {
                ListaCarti[i].stare=INTARZIATA;
            }
        }
    }
}

#define DIM_DATA 26

void Afisare()
{
    int i;
    for(i=0;i<NrCartiInBiblioteca;i++)
    {
        char data[DIM_DATA];
        ctime_s(data,DIM_DATA,&(ListaCarti[i].dataImprumut));
        printf("\nCOD:            %d",ListaCarti[i].cod);
        printf("\nTITLU:          %s",ListaCarti[i].titlu);
        printf("\nCATEGORIE:      %s",ListaCarti[i].categorie);
        printf("\nSTARE:          %s",DENUMIRI_STARI[ListaCarti[i].stare]);
        printf("\nDATA IMPRUMUT:%s",data);

    }
    printf("\n");
}


int main()
{
    Initializare();
    Adaugare(1,"Dune");
    Adaugare(2,"Istoria Frantei");
    Afisare();
    Catalogare(2,1002,"Istorie");
    Catalogare(1,1001,"S.F.");
    Afisare();
    Imprumutare(1002);
    Afisare();
    Inventar(time(0)+2*SECUNDE_IN_14_ZILE);
    Afisare();
    Returnare(1002);
    Afisare();
    return 0;
}
