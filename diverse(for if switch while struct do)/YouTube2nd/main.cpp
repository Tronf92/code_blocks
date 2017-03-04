#include <iostream>

using namespace std;


struct bilet{
    char destinatie[100];
    double pret;
    int nrLoc;
    char numePersoana[100];

};

int main()
{
    bilet b1, *b2=NULL;
    cout << "Biletul 1:" << endl;
    cout << "\tDestinatia: ";
    cin>> b1.destinatie;
    cout << "\tPret:";
    cin >>b1.pret;
    cout << "\tNumar loc:";
    cin >> b1.nrLoc;
    cout << "\tNumele persoanei: ";
    cin >> b1.numePersoana;

    b2=new bilet;
    cout << "\nBiletul 2:" << endl;
    cout << "\tDestinatia:";
    cin >> b2->destinatie;
    cout << "\tPret:";
    cin >> b2->pret;
    cout << "\tNumar loc:";
    cin >> b2->nrLoc;
    cout <<"\tNumele persoanei:";
    cin >>b2->numePersoana;

    cout << "\n\nCost bilete:" << b1.pret+b2->pret << "RON ";

    delete b2;

    cout << "\n\n---------\nApasa o tasta...";


    return 0;
}


