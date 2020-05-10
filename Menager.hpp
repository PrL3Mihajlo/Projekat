#ifndef MENAGER_HPP_INCLUDED
#define MENAGER_HPP_INCLUDED

class Menager{
    protected:
    string ime;
    string prezime;
    int broj_radnika;
    public:
        Menager(string ime1,string prezime1, int broj_radnika1){
        ime=ime1;
        prezime=prezime1;
        broj_radnika=broj_radnika1;

        }
        friend ostream& operator<<(ostream& izlaz, const Menager& m){

izlaz<<"Menager - ispis"<<endl;

izlaz<<"Ime: "<<m.ime<<endl;

izlaz<<"Prezime:"<<m.prezime<<endl;

izlaz<<"Broj radnika:"<<m.broj_radnika<<endl<<endl;

return izlaz;

}

};

#endif // MENAGER_HPP_INCLUDED
