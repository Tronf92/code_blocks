#include "Angajat.h"
#include <string.h>
#include <iostream>

using namespace std;

Angajat::Angajat()
{
    strcpy(this->numele," ");
    strcpy (this->functia," ");
    ore=0;
    costOra=0;
}

Angajat::Angajat(char numele[],char functia[])
{
    strcpy(this->numele,numele);
    strcpy(this->functia,functia);
    ore=0;
    costOra=0;
}

Angajat::~Angajat(void)
{
}

void Angajat::Afisare(void)
{
    cout << numele <<"are functia de " << functia << ".A lucrat" << ore << "la un cost de " << costOra << "RON/ora" << endl;

}
void Angajat::SetareDatePontaj(int ore,int costOra)
{
    this->ore=ore;
    this->costOra=costOra;
}

long Angajat::Salar(void)
{
    return ore*costOra;
}

