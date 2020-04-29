#ifndef RADNICI_HPP_INCLUDED
#define RADNICI_HPP_INCLUDED
#include "Vlasnik.hpp"

enum pozicija{radnik,vozac,poslovodja,menadzer,zamenik,sef};

class Radnik:public Vlasnik
{
    protected:
    int radni_staz;
    pozicija p;
    public:
        RADNICI(int radni_staz1, pozicija p1,string ime1, string prezime1,bool pol1):VLASNIK(ime1,prezime1,pol1){
        radni_staz=radni_staz1;
        p=p1;
        }


};

#endif // RADNICI_HPP_INCLUDED
