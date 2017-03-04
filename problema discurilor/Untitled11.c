#include <stdio.h>
#include <conio.h>
#include <string.h>

int turnuri[3][100];
int total[3];
int discuri;
int mutari;

void AfisareTurnuri(){
    int i,j;
    printf("------------MUTAREA %d---------\n",mutari);
    for(i=0;i<3;i++){
        printf("Turnu: %d:",i);
        for(j=0;j<total[i];j++){
            printf("%d",turnuri[i][j]);
        }
        printf("\n");
    }
}

void MutareDisc(int sursa, int destinatie){
    turnuri[destinatie][total[destinatie]]=turnuri[sursa][total[sursa]-1];
    total[destinatie]++;
    total[sursa]--;
    mutari++;
}

void Hanoi(int discuri, int sursa, int destinatie, int intermediar){
    if (discuri==1){
        MutareDisc(sursa,destinatie);
        AfisareTurnuri();
    }
    else {
        Hanoi(discuri-1,sursa,intermediar,destinatie);
        MutareDisc(sursa,destinatie);
        AfisareTurnuri();

        Hanoi(discuri-1,intermediar,destinatie,sursa);
    }
}

void main (void)
{
    printf("Introduceti nr de discuri:");
    scanf("%d",&discuri);
    int i;
    for(i=discuri;i>0;i--){
        turnuri[0][discuri-i]=i;
    }
    total[0]=discuri;
    total[1]=total[2]=0;
    mutari=0;

    AfisareTurnuri();
    Hanoi(discuri,0,2,1);

    printf("\n\n----------\nApasa o tasta...");
    getch();
}
