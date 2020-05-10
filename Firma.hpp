#ifndef FIRMA_HPP_INCLUDED
#define FIRMA_HPP_INCLUDED
#include "Vlasnik.hpp"


class Firma{
protected:
    string ime;
    int pib_firme;
    int godina;
    Vlasnik v;
public:
    Firma(string ime1,int pib_firme1,int godina1, double ulaganje1,string ime2, string prezime1, bool pol1,pozicija p1):v(ulaganje1,ime2,prezime1,pol1,p1){
    ime=ime1;
    pib_firme=pib_firme1;
    godina=godina1;


    }


};

#endif // FIRMA_HPP_INCLUDED
