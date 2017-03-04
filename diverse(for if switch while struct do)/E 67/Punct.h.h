#include <stdio.h>
#include <math.h>

class Punct{
    public:
        Punct(void);
        Punct(int x);
        Punct(int x,int y);
        ~Punct(void);

        void Afiseaza();
        void SeteazaCoordonate(int x,int y);
        double DistantaPanaLa(Punct p);
        double Panta(Punct p);
        Punct& operator+(const Punct&);

    private:
        int x;
        int y;
};
