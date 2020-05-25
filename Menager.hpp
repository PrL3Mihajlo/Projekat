#ifndef MENAGER_HPP_INCLUDED
#define MENAGER_HPP_INCLUDED

class Menager:public Radnik
{
protected:
    int broj_radnika;
public:
    Menager(string ime1,string prezime1,bool pol1,pozicija p1,int broj_radnika1):Radnik(ime1,prezime1,pol1,p1)
    {
        broj_radnika=broj_radnika1;

    }
    string getIme()
    {
        return ime;
    }
    string getPrezime()
    {
        return prezime;
    }
    void setPozicija(pozicija poz){
    p=poz;
    }
    void ispis(){
    Radnik::ispis();
    cout<<"Broj radnika: "<<broj_radnika<<endl;

    }
    friend ostream& operator<<(ostream& izlaz, const Menager& m)
    {


        izlaz<<"Ime: "<<m.ime<<endl;
        izlaz<<"Prezime:"<<m.prezime<<endl;
        izlaz<<"Broj radnika:"<<m.broj_radnika<<endl<<endl;
        izlaz<<"Pozicija:";
        if(m.p==radnik){
            izlaz<<"radnik"<<endl;
        }
        if(m.p==vozac){
            izlaz<<"vozac"<<endl;
        }
        if(m.p==poslovodja){
            izlaz<<"poslovodja"<<endl;
        }
        if(m.p==zamenik){
            izlaz<<"zamenik"<<endl;
        }
        if(m.p==sef){
            izlaz<<"sef"<<endl;
        }
        if(m.p==menager){
            izlaz<<"menager"<<endl;
        }


        return izlaz;

    }

};

#endif // MENAGER_HPP_INCLUDED
