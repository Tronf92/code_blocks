#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

struct bilet{
    char destinatie[100];
    double pret;
    int nrLoc;
    char numePersoana[100];
    int nrBilet;
	bilet *urmator;
};
int totalBilete=0;
struct bilet *inceput= NULL;

void IntroducereInformatii(bilet*nod){
    bilet b;
    printf("\nBiletul:\n");
    printf("\tDestinatia:");
    fflush(stdin);
    gets(b.destinatie);
    printf("\tPret:");
    scanf("%lf",&b.pret);
    printf("\tNumar loc:");
    scanf("%d",&b.nrLoc);
    printf("\tNumele persoanei:");
    fflush(stdin);
    gets(b.numePersoana);
    totalBilete++;
    b.nrBilet=totalBilete;

    strcpy(nod->destinatie,b.destinatie);
    nod->pret=b.pret;
    nod->nrLoc=b.nrLoc;
    strcpy(nod->numePersoana,b.numePersoana);
    nod->nrBilet=b.nrBilet;
}

void AdaugLaInceput()
{
    bilet *p;
    p=new bilet;
    IntroducereInformatii(p);

    p->urmator=inceput;
    inceput=p;
}

void AdaugaLaSfarsit()
{
    bilet *p,*q;
    p=new bilet;
    IntroducereInformatii(p);

    if(inceput== NULL){
        p->urmator=inceput;
        inceput=p;
    }
    else{
        q=inceput;
        while (q->urmator!=NULL){
            q=q->urmator;
        }
        p->urmator= NULL;
        q->urmator=p;
    }
}

void AdaugDupaNod()
{
    bilet *p,*q;
    int k;
    p=new bilet;
    IntroducereInformatii(p);

    printf("Introduceti nr biletului:");
    scanf("%d",&k);

    bool existaNodulCautat;

    if (inceput==NULL){
        existaNodulCautat=false;
    }
    else{
        q=inceput;
        while ((q!=NULL)&&(q->nrBilet!=k)){
            q=q->urmator;
        }
        if (q==NULL){
            existaNodulCautat=false;
        }
        else{
            existaNodulCautat=true;
            p->urmator=q->urmator;
            q->urmator=p;
        }
    }
    if(!existaNodulCautat){
        printf("Nodul cautat nu exista!\n");
    }
}

void StergPrimNod()
{
    bilet *p,*q;

    if(inceput==NULL){
        printf("Lista este vida!");
    }
    else{
        p=inceput;
        inceput=inceput->urmator;
        delete p;
    }
}

void StergUltimNod()
{
    bilet *p,*q;

    if(inceput==NULL){
        printf("Lista este vida!");
    }
    else{
        if(inceput->urmator==NULL){
            p=inceput;
            inceput=NULL;
            delete p;
        }
        else{
            p=inceput;
            q=inceput;
            while(p->urmator!=NULL){
                q=p;
                p=p->urmator;
            }
            q->urmator=NULL;
            delete p;
        }
    }
}

void StergNod()
{
    bilet *p,*q;
    int k;

    printf("Introduceti nr biletului:");
    scanf("%d",&k);

    bool existaNodulCautat;

    if(inceput==NULL){
        existaNodulCautat=false;
    }
    else{
        if(inceput->urmator==NULL){
            if(inceput->urmator->nrBilet!=k){
                existaNodulCautat=false;
            }
            else{
                existaNodulCautat=true;
                p=inceput;
                inceput=NULL;
                delete p;
            }
        }
        else{
            p=inceput;
            q=inceput;
            while((p!=NULL)&&(p->nrBilet!=k)){
                q=p;
                p=p->urmator;
            }
            if(q==NULL){
                existaNodulCautat=false;
            }
            else{
                existaNodulCautat=true;
                q->urmator=p->urmator;
                delete p;
            }
        }

    }
    if (!existaNodulCautat){
        printf("Nodul cautat nu exista!\n");
    }
}

void AfisareInfoNumar(double nr,int total, char spatiu)
{
    char s[20];
    sprintf(s,"%g",nr);
    printf("%s",s);
    int i;
    for(i=0;i<(total-strlen(s));i++){
        printf("%c",spatiu);
    }
}

void AfisareInfoText(char text[],int total, char spatiu){
    printf("%s",text);
    int i;
    for(i=0;i<(total-strlen(text));i++){
        printf("%c",spatiu);
    }
}

void AfisareLista()
{
   bilet *p;

    printf("\n******LISTA DE BILETE:******\n");
    p=inceput;
    while(p!=NULL){
        printf("UBilet:");
        AfisareInfoNumar(p->nrBilet,14,'A');

        printf("218196196196196194196196196196196194196196196191\n");
        printf("|");
        AfisareInfoText(p->numePersoana,19,' ');
        printf("|");
        AfisareInfoText(p->destinatie,19,' ');
        printf("|Pret:");
        AfisareInfoNumar(p->pret,9,' ');
        printf("|Loc:");
        AfisareInfoNumar(p->nrLoc,5,' ');
        printf("\n");
        printf("195196196196196196193196196196196196193196196196196196193196196196180\n");
        printf("192196196196196196196196196196194196196196196196217\n");
        p=p->urmator;
    }
    printf("                                  NULL\n");
    printf("\nApasa o tasta!\n");
    getch();
}

void AfisezBileteDestinatie(char dest[])
{
    bilet *p;
    double total=0.0;

    printf("Bilete spre %s:",dest);
    p=inceput;
    while(p!=NULL){
        if (strcmp(p->destinatie,dest)==0){
            printf("%d",p->nrBilet);
            total+=p->pret;
        }
        p=p->urmator;
    }
    printf("Total: %g\n",total);
}

void AfisezBiletePersoana(char nume[])
{
    bilet *p;
    double total=0.0;

    printf("Bilete ale lui %s:", nume);
    p=inceput;
    while(p!=NULL){
        if (strcmp(p->numePersoana,nume)==0){
            printf("%d",p->nrBilet);
            total+=p->pret;
        }
        p=p->urmator;
    }
    printf("Total: %g\n",total);
}

void AfisareMeniu()
{
    printf("1.Afisare Lista Bilete.\n");
    printf("2.Adaugare bilet la inceput.\n");
    printf("3.Adaugare bilet la sfarsit.\n");
    printf("4.Adaugare bilet dupa altul.\n");
    printf("5.Sterge primul bilet.\n");
    printf("6.Sterge ultimu bilet.\n");
    printf("7.Sterge biletul dat.\n");
    printf("8.Afiseaza bilete pentru destinatie.\n");
    printf("9.Afiseaza bilete ale persoanei.\n");
    printf("\n0.Terminare.\n");
}

void main (void)
{
    char text[100];
    int x;
    do{
        AfisareMeniu();
        printf("Introduceti optiunea:");
        scanf("%d",&x);
        switch(x){
            case 0:
                break;
            case 1:
                AfisareLista();
                break;
            case 2:
                AdaugLaInceput();
                break;
            case 3:
                AdaugLaSfarsit();
                break;
            case 4:
                AdaugDupaNod();
                break;
            case 5:
                StergPrimNod();
                printf("\nApasa o tasta!\n");
                getch();
                break;
            case 6:
                StergUltimNod();
                printf("\nApasa o tasta!\n");
                getch();
                break;
            case 7:
                StergNod();
                printf("\nApasa o tasta!\n");
                getch();
                break;
            case 8:
                printf("\nIntroduceti destinatia:");
                fflush(stdin);
                gets(text);
                AfisezBileteDestinatie(text);
                printf("\nApasa o tasta!\n");
                getch();
                break;
            case 9:
                printf("\nIntroduceti numele:");
                fflush(stdin);
                gets(text);
                AfisezBiletePersoana(text);
                printf("\nApas o tasta!\n");
                getch();
                break;
        }
    }while (x!=0);
    printf("\n\n------------\nApasa o tasta...");
    getch();
}
