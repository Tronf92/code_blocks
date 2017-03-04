#include "Punct.h"

Punct::Punct(void)
{
    x=0;
    y=0;
}

Punct::Punct(int x)
{
    this->x=x;
    y=0;
}

Punct::Punct(int x,int y)
{
    this ->x=x;
    this ->y=y;
}

void Punct::Afiseaza()
{
    printf("P(%d,%d)\n",x,y);
}

Punct::~Punct(void)
{

}

void Punct::SeteazaCoordonate(int x,int y)
{
    this->x=x;
    this->y=y;
}

double Punct::DistantaPanaLa(Punct p)
{
    return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}

double Punct::Panta(Punct p)
{
    return (p.y-y)/(p.x/x);
}

Punct& Punct::operator+(const Punct& obj)
{
    x=x+obj.x;
    y=y+obj.y;

    return *this;
}

