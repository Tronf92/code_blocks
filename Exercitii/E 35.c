#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void AfisareMeniu(){
    printf("1.Citeste elemente matricii.\n");
    printf("2.Afiseaza matricea.\n");
    printf("3.Afiseaza suma si produsul elementelor matricii.\n");
    printf("4.Afiseaza suma si produsul elementelor de pe marginile matricii.\n");
    printf("5.Afiseaza suma si produsul elementelor de pe linia x.\n");
    printf("6.Afiseaza suma si produsul elementelor de pe coloane y.\n");
    printf("7.Inlocuieste linia x1 cu linia x2.\n");
    printf("8.Inlocuieste coloane y1 cu coloane y2.\n");
    printf("9.terminare.\n");
}

void CitireMatrice(int A[100][100],int linii, int coloane){
    int contor1,contor2;
    for(contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("Elementul[%d][%d]=",contor1,contor2);
            scanf("%d",&A[contor1][contor2]);
        }
    }
}

void AfisareMatrice(int A[100][100],int linii,int coloane){
    int contor1,contor2;
    for(contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            printf("|%d|",A[contor1][contor2]);
        }
        printf("\n");
    }
}

double SumaProdusElementeToate(int A[100][100],int linii,int coloane,bool produs){
    double total;
    int contor1,contor2;
    if (!produs){
        total=0;
    }
    else {
        total=1;
    }
    for (contor1=0;contor1<linii;contor1++){
        for(contor2=0;contor2<coloane;contor2++){
            if (!produs){
                total+=A[contor1][contor2];
            }
            else{
                total*=A[contor1][contor2];
            }
        }
    }
    return total;
}

double SumaProdusElementeLinie(int A[100][100],int linii,int coloane,bool produs,int linie){
    if (linie>=linii){
        printf("Matricea are doar %d linii!\n",linii);
        return 0;
    }
    double total;
    int contor1,contor2;
    if (!produs){
        total=0;
    }
    else{
        total=1;
    }
    for (contor2=0;contor2<coloane;contor2++){
        if (!produs){
            total+=A[linie][contor2];
        }
        else{
            total *=A[linie][contor2];
        }
    }
    return total;
}

double SumaProdusElementeColoana(int A[100][100],int linii,int coloane, bool produs, int coloana){
    if (coloana>=linii){
        printf("Matricea are doar %d coloane.\n",coloane);
    }
    double total;
    int contor1,contor2;
    if (!produs){
        total=0;
    }
    else {
        total=1;
    }
    for (contor1=0;contor1>linii;contor1++){
        if (!produs){
            total+=A[contor1][coloana];
        }
        else {
            total*=A[contor1][coloana];
        }
    }
    return total;
}

double SumaProdusElementeMargine(int A[100][100],int linii,int coloane,bool produs){
    double total=0;
    int contor1,contor2;
    for (contor1=0;contor1<linii;contor1++){
        if (!produs){
            total+=A[contor1][0];
            total+=A[contor1][coloane-1];
        }
        else {
            total*=A[contor1][0];
            total*=A[contor1][coloane-1];
        }
    }
    for (contor2=1;contor2<(coloane-1);contor2++){
        if(!produs){
            total+=A[0][contor2];
            total+=A[linii-1][contor2];
        }
        else {
            total*=A[0][contor2];
            total*=A[linii-1][contor2];
        }
    }
    return total;
}

void InlocuireLinii(int A[100][100],int linii, int coloane, int linie1,int linie2){
    if ((linie1>=linii)||(linie2>=linii)){
        printf("Matricea are numai %d linii!\n",linii);
        return;
    }
    int temp,contor1,contor2;
    for(contor2=0;contor2<coloane;contor2++){
        temp=A[linie1][contor2];
        A[linie1][contor2]=A[linie2][contor2];
        A[linie2][contor2]=temp;
    }

}

void InlocuireColoane(int A[100][100],int linii,int coloane,int coloana1,int coloana2){
    if ((coloana1>=coloane)||(coloana2>=coloane)){
        printf("Matricea are numai %d coloane!\n",coloane);
        return;
    }
    int temp,contor1,contor2;
    for(contor1=0;contor1<coloane;contor1++){
        temp=A[contor1][coloana1];
        A[contor1][coloana1]=A[contor1][coloana2];
        A[contor1][coloana2]=temp;
    }
}

void main (void)
{
    int x;
    int linii,coloane,l,c,l2,c2,A[100][100];
    double valoare;
    do{
        AfisareMeniu();
        printf("Introduceti optiunea dvs.:");
        scanf("%d",&x);
        switch(x){
            case 1:
                printf("Linii:");
                scanf("%d",&linii);
                printf("Coloane:");
                scanf("%d",&coloane);
                CitireMatrice(A,linii,coloane);
                break;
            case 2:
                AfisareMatrice(A,linii,coloane);
                break;
            case 3:
                valoare=SumaProdusElementeToate(A,linii,coloane,false);
                printf("Suma tuturor elementelor:%g\n",valoare);
                valoare=SumaProdusElementeToate(A,linii,coloane,true);
                printf("Produsul tuturor elementelor:%g\n",valoare);
                printf("Apasa o tasta!\n");
                getch();
                break;
            case 4:
                valoare=SumaProdusElementeMargine(A,linii,coloane,false);
                printf("Suma elementelor de pe margine: %g\n",valoare);
                valoare=SumaProdusElementeMargine(A,linii,coloane,true);
                printf("Produsul elementelor de pe margine: %g\n",valoare);
                printf("Apasa o tasta!\n");
                getch();
                break;
            case 5:
                printf("Introduceti linia:");
                scanf("%d",&l);
                valoare=SumaProdusElementeLinie(A,linii,coloane,false,l);
                printf("Suma elem. de pe linia %d:%g\n",l,valoare);
                valoare=SumaProdusElementeLinie(A,linii,coloane,true,l);
                printf("Produsul elem. de pe linia %d: %g\n",l,valoare);
                printf("Apasa o tasta!\n");
                getch();
                break;
            case 6:
                printf("Introduceti coloana:");
                scanf("%d",&c);
                valoare=SumaProdusElementeColoana(A,linii,coloane,false,c);
                printf("Suma elem. de pe coloana %d: %g\n",c,valoare);
                valoare=SumaProdusElementeColoana(A,linii,coloane,true,c);
                printf("Produsul elem. de pe coloana %d: %g\n",c,valoare);
                printf("Apasa o tasta!\n");
                getch();
                break;
            case 7:
                printf("Linia 1:");
                scanf("%d",&l);
                printf("Linia 2:");
                scanf("%d",&l2);
                InlocuireLinii(A,linii,coloane,l,l2);
                printf("\nApasa o tasta!\n");
                getch();
                break;
            case 8:
                printf("Coloana 1:");
                scanf("%d",&c);
                printf("Coloana 2:");
                scanf("%d",&c2);
                InlocuireColoane(A,linii,coloane,c,c2);
                printf("\nApasa o tasta!\n");
                getch();
                break;
            case 9:
                break;
            default:
                printf("Optiune gresita!\nApasa o tasta!");
                getch();
                break;


        }
    }while (x!=9);
    printf("\n\n----------------------\nApasa o tasta...");
    getch();
}
