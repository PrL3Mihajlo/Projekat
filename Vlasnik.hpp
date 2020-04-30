#ifndef VLASNIK_HPP_INCLUDED
#define VLASNIK_HPP_INCLUDED
#include "Radnici.hpp"


class Vlasnik:public Radnik
{
    protected:
        double ulaganje;


    public:
        Vlasnik(string ime1,string prezime1,bool pol1,pozicija p1,double ulaganje):Radnik(ime1,prezime1,pol1,p1)
        {
            ulaganje=ulaganje1;
        }


};


#endif // VLASNIK_HPP_INCLUDED
