#ifndef ISPORUKA_HPP_INCLUDED
#define ISPORUKA_HPP_INCLUDED

class Isporuka{
protected:
    string mestoIzvoza;
    string mestoUvoza;
    int kilaza;
    double cena;
    static int broj_isporuka;
public:
    Isporuka(string mestoIzvoza1,string mestoUvoza1,int kilaza1,double cena1){
    mestoIzvoza=mestoIzvoza1;
    mestoUvoza=mestoIzvoza1;
    kilaza=kilaza1;
    cena=cena1;
    broj_isporuka++;
    }
    void promenaCene(){
    if(kilaza<10){
        cena=kilaza*800;
    }
    else{
        cena=kilaza*500;
    }

    }



};

#endif // ISPORUKA_HPP_INCLUDED
