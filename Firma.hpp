#ifndef FIRMA_HPP_INCLUDED
#define FIRMA_HPP_INCLUDED


class Firma{
protected:
    string ime;
    int pib_firme;
    int godina;
    VLASNIK vlasnik;
public:
    Firma(string ime1,int jmbg_firme1,int godina1){
    ime=ime1;
    jmbg_firme=jmbg_firme1;
    godina=godina1;

    }


};

#endif // FIRMA_HPP_INCLUDED
