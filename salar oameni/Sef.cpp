#include "Sef.h"
#include <iostream>

using namespace std;

Sef::Sef(char numele[])
{
    strcpy(this->numele,numele);
    strcpy(this->functia,"sef");
    ore=0;
    costOra=0;
}

Sef::~Sef(void)
{
}

long Sef::Salar(void)
{
    return ore*costOra;
}

void Sef::StabilirePrima(int prima);
{
    this->prima=prima;
}
