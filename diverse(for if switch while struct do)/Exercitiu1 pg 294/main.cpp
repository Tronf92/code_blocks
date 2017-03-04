#include <iostream>

using namespace std;

struct lista{
    int numar;

    lista *urmator;

};
int totalNumere=0;
lista *inceput=NULL;


void IntroducereNumar(lista *nod){
    lista a;
    cout << "Introdu un numar intreg:" << endl;
    cin >> a.numar;
    nod->numar,a.numar;

}
void AdaugareNod(){
    lista *p;
    int n;

    p= new lista;
    cout<< "inf din nod";
    cin >> n;
    p->numar=n;

    p->urmator=inceput;
    inceput=p;

}


void AfisareLista(){
    lista *p;
    cout << "\nLista:";
    p=inceput;

    while (p!=NULL){
        cout << p->numar;
        p=p->urmator;

    }
    cout << "\nApasa o tasta";


}

void Meniu(){
    cout << "1.Afisare lista." << endl;
    cout << "2.Sorteaza lista." << endl;
    cout << "3.Adaugare N noduri la inceput" << endl;
    cout << "0.Terminare." << endl;

}


void Sortare(){
    int temp;
    bool schimbari;
    if ((inceput==NULL)||(inceput->urmator==NULL)){
        return;
    }
    lista *a,*b,*c,*p;
    do{
        schimbari=false;
        a=NULL;
        p=inceput;
        while(p->urmator!=NULL){
            b=p->urmator;
            c=p->urmator->urmator;
            if(p->numar>b->numar){
                if (a!=NULL){
                    a->urmator=b;
                }
                else{
                    inceput=b;
                }
                b->urmator=p;
                p->urmator=c;
                a=b;
                schimbari=true;
            }
            else{
                a=p;
                p=p->urmator;
            }
        }
    }while(schimbari);
}

int main()
{
    char text[100];
    int x,n,i;
    do{
        Meniu();
        cout << "Introdu optiunea:";
        cin >> x;
        switch(x){
            case 0:
                break;
            case 1:
                AfisareLista();
                break;
            case 2:
                cout << "introdu nr de noduri";
                cin >> n;
                for (i=0;i<n;i++){
                    AdaugareNod();
                }
                break;
            case 3:
                Sortare();
                cout << "apasa o tasta";

                break;
            default:
                cout << "optiune gresita";

                break;

        }
    }while (x!=0);

    cout << "apasa o tasta";





    return 0;
}
