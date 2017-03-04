#include "Angajat.h"
#include <iostream>

using namespace std;

class Sef:
    public Angajat

{
    public:
        Sef(char numele[]);
        ~Sef(void);

    private:
        int prima;

    public:
        long Salar(void);
        void StabilirePrima(int prima);
};
