#include "Angajat.h"
#include "Sef.h"
#include <iostream>

using namespace std;

int_tmain(int argc,_TCHAR* argv[])
{
    Angajat a1("Victor","muncitor");
    Angajat a2("George","inginer");
    Sef         s("Nelu");

    a1.SetareDatePontaj(160,5);
    a2.SetareDatePontaj(160,8);
    s.SetareDatePontaj(160,12);
    s.StabilirePrima(1000);

    a1.Afisare();
    a2.Afisare();
    s.Afisare();

    cout << "Salarii:" << a1.Salar() <<"RON ," << a2.Salar() <<"RON ," << s.Salar()<<"RON." << endl;

    return 0;
}
