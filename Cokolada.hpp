#ifndef COKOLADA_HPP_INCLUDED
#define COKOLADA_HPP_INCLUDED
#include "Sirovine.hpp"
#include "Masina.hpp"
enum VRSTA_COKOLADE {crna,bela,mlecna};

class Cokolada
{
protected:
    VRSTA_COKOLADE vrstaC;
    double kolicina;
    int cena;
    Sirovine s;
public:
    Cokolada(VRSTA_COKOLADE vrsta1,double kolicina1,int cena1, double procenat1,vrsta v1):s( procenat1, v1)
    {
        vrstaC=vrsta1;
        kolicina=kolicina1;
        cena=cena1;


    }

};

#endif // COKOLADA_HPP_INCLUDED
