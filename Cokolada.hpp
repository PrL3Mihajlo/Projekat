#ifndef COKOLADA_HPP_INCLUDED
#define COKOLADA_HPP_INCLUDED
#include "Sirovine.hpp"

class COKOLADA{
    protected:
string vrsta;
double kolicina;
int cena;
SIROVINE s;
    public:
        COKOLADA(string vrsta1,double kolicina1,int cena, double procenat1,vrsta v1):s( procenat1, v1)
        {

        }

};

#endif // COKOLADA_HPP_INCLUDED
