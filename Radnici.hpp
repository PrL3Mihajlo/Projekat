#ifndef RADNICI_HPP_INCLUDED
#define RADNICI_HPP_INCLUDED
enum pozicija {radnik,vozac,poslovodja,zamenik,sef,menager};


class Radnik
{
protected:
    string ime;
    string prezime;
    bool pol;
    pozicija p;
public:
    Radnik(string i,string pr,bool p1,pozicija pp)
    {
        ime=i;
        prezime=pr;
        pol=p1;
        p=pp;
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
    virtual void ispis(){
     cout<<"Ime: "<<ime<<endl;
        cout<<"Prezime: "<<prezime<<endl;
        cout<<"pol: ";
        if(pol==1){
            cout<<"musko"<<endl;
        }
        if(pol==0){
            cout<<"zensko"<<endl;
        }
        cout<<"Pozicija:";
        if(p==radnik){
            cout<<"radnik"<<endl<<endl;
        }
        if(p==vozac){
            cout<<"vozac"<<endl<<endl;
        }
        if(p==poslovodja){
            cout<<"poslovodja"<<endl<<endl;
        }
        if(p==zamenik){
            cout<<"zamenik"<<endl<<endl;
        }
        if(p==sef){
            cout<<"sef"<<endl<<endl;
        }
        if(p==menager){
            cout<<"menager"<<endl<<endl;
        }


    }
     friend ostream& operator<<(ostream& izlaz, const Radnik& r)
    {


        izlaz<<"Ime: "<<r.ime<<endl;
        izlaz<<"Prezime:"<<r.prezime<<endl;
        izlaz<<"pol:"<<r.pol<<endl;
        izlaz<<"Pozicija:";
        if(r.p==radnik){
            izlaz<<"radnik"<<endl<<endl;
        }
        if(r.p==vozac){
            izlaz<<"vozac"<<endl<<endl;
        }
        if(r.p==poslovodja){
            izlaz<<"poslovodja"<<endl<<endl;
        }
        if(r.p==zamenik){
            izlaz<<"zamenik"<<endl<<endl;
        }
        if(r.p==sef){
            izlaz<<"sef"<<endl<<endl;
        }
        if(r.p==menager){
            izlaz<<"menager"<<endl<<endl;
        }

        return izlaz;

    }

};






#endif // RADNICI_HPP_INCLUDED
