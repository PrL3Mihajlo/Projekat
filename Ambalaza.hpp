#ifndef AMBALAZA_HPP_INCLUDED
#define AMBALAZA_HPP_INCLUDED

class Ambalaza
{
protected:
    string boja;
    string naziv_firme;
    string materijali;
public:
    Ambalaza(string boja1,string naziv_firme1,string materijali1)
    {
        boja=boja1;
        naziv_firme=naziv_firme1;
        materijali=materijali1;

    }
    friend ostream& operator<<(ostream& izlaz, const Ambalaza& a)
    {

        izlaz<<"Ambalaza - ispis"<<endl;
        izlaz<<"Boja: "<<a.boja<<endl;
        izlaz<<"Naziv firme:"<<a.naziv_firme<<endl;
        izlaz<<"Materijali:"<<a.materijali<<endl<<endl;

        return izlaz;

    }

};

#endif // AMBALAZA_HPP_INCLUDED
