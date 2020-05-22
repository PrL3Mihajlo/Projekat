#ifndef ISPORUKA_HPP_INCLUDED
#define ISPORUKA_HPP_INCLUDED



class Isporuka
{
protected:
    string mestoIzvoza;
    string mestoUvoza;
    int kilaza;
    double cena;
    static int broj_isporuka;
public:
    Isporuka(string mestoIzvoza1,string mestoUvoza1,int kilaza1,double cena1)
    {
        mestoIzvoza=mestoIzvoza1;
        mestoUvoza=mestoUvoza1;
        kilaza=kilaza1;
        cena=cena1;
        broj_isporuka++;
    }
    string getMestoIzvoza(){
    return mestoIzvoza;
    }
    string getMestoUvoza(){
    return mestoUvoza;
    }
    int getKilaza(){
    return kilaza;
    }
    double getCena(){
    return cena;
    }
    void promenaCene()
    {
        if(kilaza<10)
        {
            cena=kilaza*800;
        }
        else
        {
            cena=kilaza*500;
        }

    }
    friend void pisiIsporuke(string nazivFajla, Isporuka &i, char mode='w'){
     ofstream fajl;

    if (mode=='a'){
        fajl.open (nazivFajla, ios_base::app);
    }else{
        fajl.open (nazivFajla);
    }

    fajl << i.getMestoIzvoza() << "|" << i.getMestoUvoza() << "|" << i.getKilaza() << "|" << i.getCena() << endl;

    fajl.close();

    }
    friend ostream& operator<<(ostream& izlaz, const Isporuka& i)
    {

        izlaz<<"Mesto Izvoza: "<<i.mestoIzvoza<<endl;
        izlaz<<"Mesto Uvoza:"<<i.mestoUvoza<<endl;
        izlaz<<"Kilaza:"<<i.kilaza<<endl;
        izlaz<<"Cena:"<<i.cena<<endl<<endl;

        return izlaz;

    }



};

#endif // ISPORUKA_HPP_INCLUDED
