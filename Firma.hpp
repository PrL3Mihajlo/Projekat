#ifndef FIRMA_HPP_INCLUDED
#define FIRMA_HPP_INCLUDED
#include "Vlasnik.hpp"


class Firma
{
protected:
    string ime;
    int pib_firme;
    int godina;
    vector<Radnik*>radnici;
public:
    Firma(string ime1,int pib_firme1,int godina1)
    {
        ime=ime1;
        pib_firme=pib_firme1;
        godina=godina1;


    }
     void dodavanje(Radnik &r)
    {
        radnici.push_back(&r);
        cout<<"dodat radnik"<<endl;
    }
    void brisanje()
    {
        string line1,line2;
        cin >> line1 >> line2;
        for(auto i = radnici.begin(); i != radnici.end(); i++)
            if((*i) -> getIme() == line1 && (*i) -> getPrezime() == line2)
            {
                radnici.erase(i);
                cout << line1 << " " << line2 << " je obrisan/a." << endl;
                return;
            }
        cout << line1 << " " << line2 << " nije obrisan/a." << endl;
    }
    void pretraga(string s){
        int a;
        if(s=="radnik" || s=="Radnik") a=0;
        if(s=="vozac" || s=="Vozac") a=1;
        if(s=="poslovodja" || s=="Poslovodja") a=2;
        if(s=="zamenik" || s=="Zamenik") a=3;
        if(s=="sef"|| s=="Sef") a=4;
         for (auto it=radnici.begin(); it!=radnici.end(); it++){
            if((*it)->getPozicija()==a){
                    (*it)->ispis();
            }
         }
    }
    void ispis(){
    for(auto it = radnici.begin();it!= radnici.end();it++){
        (*it)->ispis();
    }
    }


};

#endif // FIRMA_HPP_INCLUDED
