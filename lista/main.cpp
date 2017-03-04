#include <iostream>
#include <cstdlib>
using namespace std;

struct lista{
    char nume[100];
    char oras[100];
    int varsta;
    lista *urmator;

};lista *inceput=NULL;

void adaugare()
{
    lista lis;
    cout << "Lista :\n";
    cout << "Nume:\n";
    cin >> lis.nume;
    cout << "Oras:\n";
    cin >> lis.oras;
    cout << "Varsta:\n";
    cin >> lis.varsta;
    lista *p=new lista;
    p->nume,lis.nume;
    p->oras,lis.oras;
    p->varsta,lis.varsta;
    p->urmator=inceput;
    inceput=p;
}

void afisare()
{
    lista *p;

    p=inceput;
    int i=1;
    while(p!=NULL){
        cout << p->nume << p->oras << p->varsta;
        p=p->urmator;
        i++;
    }
}

int main()
{
    int x;
    x=0;
    do{
        adaugare();
        x++;

    }while(x<2);

    afisare();




    return 0;
}
