#ifndef RADNICI_HPP_INCLUDED
#define RADNICI_HPP_INCLUDED
enum pozicija {radnik,vozac,poslovodja,menadzer,zamenik,sef};


class Radnik
{
protected:
    string ime;
    string prezime;
    bool pol;
    pozicija p;
public:
    Radnik(string i,string pr,bool p,pozicija pp)
    {
        ime=i;
        prezime=pr;
        pol=p;
        p=pp;
    }



};

#endif // RADNICI_HPP_INCLUDED
