#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

char labirint[100][100];        //structura labirintului
char optim[100][100];           //solutia optima
int lungimeOptim=-1;            //lungimea drumului optim
int latime, inaltime;           //dimensiunile labirintului
int startX, startY;             //coord de pornire
int solutii;                    //numar solutii

void AfisareLabirint(bool solutieOptima)
{
    solutieOptima=false;
    int i,j;
    for (i=0;i<inaltime;i++)
        {
        for(j=0;j<latime;j++)
        {
            if(solutieOptima)
                printf("%c",optim[i][j]);
            else
                printf("%c",labirint[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

bool IncarcaLabirint(char *fisier)
{
    FILE *fis;
    char c[1];
    int codASCII;

    if((fis=fopen(fisier,"r"))== NULL){
        printf("Fisierul %s nu a putut fi deschis!\n",fisier);
        return false;
    }
    latime=inaltime=0;
    while (fread(c,sizeof(char),1,fis)>0){
        codASCII=(int)c[0];

        switch(codASCII){
        case 10:
            latime=0;
            inaltime++;
            break;
        default:
            labirint[inaltime][latime]=c[0];
            latime++;
            break;
        }
    }
    inaltime++;
    fclose(fis);

    AfisareLabirint(true);
    return true;
}

void VerificaSolutieOptima(int lungimeDrum)
{
    int i,j;
    if ((lungimeDrum<lungimeOptim)||(lungimeOptim==-1)){
        for(i=0;i<inaltime;i++)
            for(j=0;j<latime;j++)
                optim[i][j]=labirint[i][j];
        lungimeOptim=lungimeDrum;
    }
}

void CautaIesire(int x,int y,int lungimeDrum)
{
    if (labirint[x][y]!=' ')
        return;
    labirint[x][y]='*';

    if((x==(inaltime-1))||(x==0)){
        solutii++;
        printf("Solutia %d cu lungimea %d:\n",solutii,lungimeDrum);
        VerificaSolutieOptima(lungimeDrum);
        AfisareLabirint(true);
    }

    if ((y==(latime-1))||(y==0)){
        solutii++;
        printf("Solutia %d cu lungimea %d:\n",solutii,lungimeDrum);
        VerificaSolutieOptima(lungimeDrum);
        AfisareLabirint(true);
    }

    CautaIesire(x,y-1,lungimeDrum+1);//stanga
    CautaIesire(x-1,y,lungimeDrum+1);//sus
    CautaIesire(x,y+1,lungimeDrum+1);//dreapta
    CautaIesire(x+1,y,lungimeDrum+1);//jos

    labirint[x][y]=' ';
    return;
}

void main(void)
{
    char numeFisier[100];
    printf("Introduceti numele fisierului:");
    scanf("%s",&numeFisier);
    if(IncarcaLabirint(numeFisier)){
        printf("Introduceti coordonatele de pornire:\n");
        printf("\tX=");scanf("%d",&startX);
        printf("\tY=");scanf("%d",&startY);

        if(labirint[startX][startY]=='@'){
            printf("Pozitia indicata este zid!\n");
        }
        else{
            CautaIesire(startX,startY,0);
            if(solutii>0){
                printf("------SOLUTIA OPTIMA:----Lungime:%d------\n",lungimeOptim);
                AfisareLabirint(true);
            }
            else{
                printf("Nu exista solutii de iesire!\n");
            }
        }
    }
    printf("\n\n---------\nApasa o tasta...");
    getch();
}
