#ifndef VLASNIK_HPP_INCLUDED
#define VLASNIK_HPP_INCLUDED
#include "Radnici.hpp"


class Vlasnik:public Radnik
{
protected:
    double ulaganje;



public:
    Vlasnik(double ulaganje1,string ime1, string prezime1, bool pol1,pozicija p1):Radnik(ime1,prezime1,pol1,p1)
    {
        ulaganje=ulaganje1;
    }
    string getIme()
    {
        return ime;
    }
    string getPrezime()
    {
        return prezime;
    }
    pozicija getPozicija()
    {
        return p;
    }
    void ispis(){
    Radnik::ispis();
    cout<<"ulaganje: "<<ulaganje<<endl<<endl;

    }

     friend ostream& operator<<(ostream& izlaz, const Vlasnik& v)
    {


        izlaz<<"Ime: "<<v.ime<<endl;
        izlaz<<"Prezime:"<<v.prezime<<endl;
        izlaz<<"pol:"<<v.pol<<endl;
        izlaz<<"Pozicija:";
        if(v.p==radnik){
            izlaz<<"radnik"<<endl;
        }
        if(v.p==vozac){
            izlaz<<"vozac"<<endl;
        }
        if(v.p==poslovodja){
            izlaz<<"poslovodja"<<endl;
        }
        if(v.p==zamenik){
            izlaz<<"zamenik"<<endl;
        }
        if(v.p==sef){
            izlaz<<"sef"<<endl;
        }
        if(v.p==menager){
            izlaz<<"menager"<<endl;
        }
        izlaz<<"Ulaganje: "<<v.ulaganje<<endl;


        return izlaz;

    }

};





#endif // VLASNIK_HPP_INCLUDED
