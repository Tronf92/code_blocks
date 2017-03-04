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
    bilet b1,*b2;

    cout<<"Biletul 1:\n";
    cout<<"\tDestinatia:";

    cout<<b1.destinatie;
    cout<<"\tPret:\n";
    cin>>b1.pret;
    cout<<"\tNumar loc:";
    cin>>b1.nrLoc;
    cout<<"\tNumele persoanei:";

    cout<<b1.numePersoana;


    cout<<"\nBiletul 2:\n";
    cout<<"\tDestinatia:";

    cout<<*b2.destinatie;
    cout<<"\tPret:";
    cin>>*b2.pret;
    cout<<"\tNumar loc:";
    cin>>*b2.nrLoc;
    cout<<"\tNumele persoanei:";

    cout<<*b2.numePersoana;

    cout<<"\n\nCost bilete:  RON\n"<<b1.pret+b2.pret;

    delete b2;

    cout<<"\n\n-----------\nApasa o tasta...";


}
