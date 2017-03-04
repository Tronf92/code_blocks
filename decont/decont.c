#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
    char s[100];
    int contor1,contor2,contor3,cheltuieli_neprevazute_HU,cheltuieli_neprevazute_Slo;
    double cheltuieli_neprev_RO[100],cheltuieli_neprevazute_RO;
    float pret_motorina,km,sofer,litri,rovinieta,avans,alimentareRO,autostrada_Italia;
    float pret_rovinieta,pret_tot_rovinieta,vinieta_ungaria,autostrada_Slo,plata_cabina,pret_sofer,pret_pe_cabina,plata_sofer;
    float curs_euro,pret_rovi_euro;
    printf("Introdu nr de soferi\nNr soferi=");
    scanf("%g",&sofer);
    printf("Introdu avansul de cursa:\nAvans=");
    scanf("%g",&avans);
    printf("Locurile alimentarii:\n");
    fflush(stdin);
    gets(s);
    printf("\nCheltuieli Romania:\nRoviniete:\n");
    scanf("%g",&rovinieta);
    printf("Pret/rovinieta:\n");
    scanf("%g",&pret_rovinieta);
    pret_tot_rovinieta=pret_rovinieta*rovinieta;
    printf("Introdu pretul motorinei:\n");
    scanf("%g",&pret_motorina);
    printf("Introdu cantitatea:\n");
    scanf("%g",&litri);
    alimentareRO=pret_motorina*litri;
    printf("%s",s);
    printf("Total alimentat= %g\n",alimentareRO);
    printf("Pret total roviniete= %g\n",pret_tot_rovinieta);
    printf("Cheltuieli neprevazute Ro:\n");
    scanf("%d",&cheltuieli_neprevazute_RO);
    if (cheltuieli_neprevazute_RO!=0){
            for(contor1=0;contor1<cheltuieli_neprevazute_RO;contor1++){
        printf("cheltuieli_neprev_RO[%d]=",contor1);
        scanf("%g",&cheltuieli_neprev_RO[contor1]);



            }
    }
    printf("\nIntrodu pret vinieta Ungaria:\n");
    scanf("%g",&vinieta_ungaria);
    printf("Cheltuieli neprevazute Hu:\n");
    scanf("%d",&cheltuieli_neprevazute_HU);
    if (cheltuieli_neprevazute_HU!=0){
        for(contor2=0;contor2<cheltuieli_neprevazute_HU;contor2++){
            printf("cheltuieli neprevazute HU[%d]=",contor2);
            scanf("%g",&cheltuieli_neprevazute_HU);
        }
    }
    printf("Introdu cheltuieli autostrada Slo:\n");
    scanf("%g",&autostrada_Slo);
    printf("Cheltuieli neprevazute Slo:\n");
    scanf("%d",&cheltuieli_neprevazute_Slo);
    if (cheltuieli_neprevazute_Slo!=0){
            for (contor3=0;contor3<cheltuieli_neprevazute_Slo;contor3++){
        printf("cheltuieli neprevazute slo[%d]=",contor3);
        scanf("%g",&cheltuieli_neprevazute_Slo);}
    }
    printf("Introdu cheltuieli drumuri Italia:\n");
    scanf("%g",&autostrada_Italia);
    printf("Introdu km parcursi:\n");
    scanf("%g",&km);
    if (sofer==2){
            printf("Pret/100km/cabina:\n");
            scanf("%g",&pret_pe_cabina);
            plata_cabina=(pret_pe_cabina*km)/100;
            printf("Plata/cabina= %g",plata_cabina);
    }
    else {
        printf("Pret/100km:\n");
        scanf("%g",&pret_sofer);
        plata_sofer=(pret_sofer*km)/100;
        printf("Plata sofer= %g",plata_sofer);
    }
    printf("\nIntrodu curs valutar:\n");
    scanf("%g",&curs_euro);
    pret_rovi_euro=pret_tot_rovinieta/curs_euro;
    printf("%g",pret_rovi_euro);








}
