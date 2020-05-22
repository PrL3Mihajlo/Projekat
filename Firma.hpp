#ifndef FIRMA_HPP_INCLUDED
#define FIRMA_HPP_INCLUDED
#include "Vlasnik.hpp"
#include "Isporuka.hpp"


class Firma
{
protected:
    string ime;
    int pib_firme;
    int godina;
    int kasa;
    vector<Radnik*>radnici;
    vector<Isporuka*>isporuke;
public:
    Firma(string ime1,int pib_firme1,int godina1,int kasa1)
    {
        ime=ime1;
        pib_firme=pib_firme1;
        godina=godina1;
        kasa=kasa1;


    }
    int getKasa(){
    return kasa;
    }
     void dodavanje(Radnik &r)
    {
        radnici.push_back(&r);
        cout<<"dodat radnik"<<endl;
    }
     void dodavanjeisporuke(Isporuka &i){
         isporuke.push_back(&i);
     }
    void ispisIsporuke()
    {
       for(auto i = isporuke.begin(); i != isporuke.end(); i++)
        {
            cout<<**i<<endl;
        }
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
    void informacije(){
    cout<<"ime firme je: "<<ime<<endl;
    cout<<"Pib firme je: "<<pib_firme<<endl;
    cout<<"Godina nastanka firme je: "<<godina<<endl;
    }
    void NovaIsporuka(){
    string a;
    string b;
    int c;
    int f;
    cout<<"Unesite mesto izvoza"<<endl;
    cin>>a;
    cout<<"Unesite mesto uvoza"<<endl;
    cin>>b;
    cout<<"Unesite kilazu koja se isporucuje"<<endl;
    cin>>c;
    cout<<"Unesite cenu isporuke"<<endl;
    cin>>f;
    Isporuka* nova=new Isporuka(a,b,c,f);
    pisiIsporuke("isporuke.txt",*nova,'a');
    isporuke.push_back(nova);
    kasa=kasa+(f*c);
    }
    void KasaFirme(){
      cout<<kasa;
    }



};

#endif // FIRMA_HPP_INCLUDED
