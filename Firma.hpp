#ifndef FIRMA_HPP_INCLUDED
#define FIRMA_HPP_INCLUDED
#include "Vlasnik.hpp"
#include "Isporuka.hpp"
#include "Masina.hpp"


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
    int getKasa()
    {
        return kasa;
    }
    void dodavanje(Radnik &r)
    {
        radnici.push_back(&r);
    }
    void dodavanjeisporuke(Isporuka &i)
    {
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
    vector<int> pretraga(string s)
    {
        int a;
        vector<int>niz;
        if(s=="radnik" || s=="Radnik")
            a=0;
        if(s=="vozac" || s=="Vozac")
            a=1;
        if(s=="poslovodja" || s=="Poslovodja")
            a=2;
        if(s=="zamenik" || s=="Zamenik")
            a=3;
        if(s=="sef"|| s=="Sef")
            a=4;
        for (unsigned long int i=0; i<radnici.size(); i++)
        {
            if(radnici[i]->getPozicija()==a)
            {
                niz.push_back(i);
            }
        }
        return niz;
    }
    void ispis()
    {
        for(auto it = radnici.begin(); it!= radnici.end(); it++)
        {
            (*it)->ispis();
        }
    }
    void informacije()
    {
        cout<<"ime firme je: "<<ime<<endl;
        cout<<"Pib firme je: "<<pib_firme<<endl;
        cout<<"Godina nastanka firme je: "<<godina<<endl;
    }
    void NovaIsporuka(Masina &m)
    {
        string a;
        string b;
        int c;
        int f;
        cout<<"Unesite mesto izvoza : "<<endl;
        cin>>a;
        cout<<"Unesite mesto uvoza : "<<endl;
        cin>>b;
        cout<<"Unesite kilazu koja se isporucuje u kilogramima"<<endl;
        cin>>c;
        if(c>m.getKilaza()){
            cout<<"nemate dovoljno kilaze u magacinu morate napraviti jos cokolade"<<endl;
            return;
        }
        m.setKilaza(m.getKilaza()-c);
        cout<<"Unesite cenu isporuke po cokoladi"<<endl;
        cin>>f;
        Isporuka* nova=new Isporuka(a,b,c,f);
        pisiIsporuke("isporuke.txt",*nova,'a');
        isporuke.push_back(nova);
        kasa=kasa+(f*c);
    }
    void KasaFirme()
    {
        cout<<kasa;
    }
    void ZaposliRadnika()
    {
        string i;
        string pol2;
        string p;
        bool p1;
        string s;
        pozicija p2;
        cout<<"Unesite ime novozaposlenog"<<endl;
        cin>>i;
        cout<<"Unesite prezime novozaposlenog"<<endl;
        cin>>p;
        cout<<"Unesite pol(musko ili zensko)"<<endl;
        cin>>pol2;
        if(pol2=="musko")
        {
            p1=1;
        }
        if(pol2=="zensko")
        {
            p1=0;
        }
        cout<<"Unesite poziciju na kojoj se novozaposleni nalazi(opcije su:radnik,vozac,poslovodja,zamenik) jer je tek doveden u firmu"<<endl;
        cin>>s;
        if(s=="radnik")
        {
            p2=radnik;
        }
        if(s=="vozac")
        {
            p2=vozac;
        }
        if(s=="poslovodja")
        {
            p2=poslovodja;
        }
        if(s=="zamenik")
        {
            p2=zamenik;
        }
        Radnik* nova=new Radnik(i,p,p1,p2);
        radnici.push_back(nova);



    }
    void UnaprediRadnika()
    {
        cout<<"upisite trenutnu poziciju radnika(radnik,vozac,poslovodja,zamenik,sef)"<<endl;
        string s;
        cin>>s;
        vector<int> iaa=pretraga(s);
        string a,b;
        cout<<"Izaberite Prezime jednog od sledecih radnika koga zelite da unapredite"<<endl;
        for(auto i=iaa.begin(); i <iaa.end(); i++)
        {
        radnici[*i]->ispis();
        }
        cin>>a;
        cout<<"Izaberite poziciju na koju zelite da unapredite radnika(radnik,vozac,poslovodja,zamenik,sef)"<<endl;
        cin>>b;
        pozicija p;
        if(b=="radnik")
        {
            p=radnik;
        }
        if(b=="vozac"){
            p=vozac;
        }
        if(b=="poslovodja"){
            p=poslovodja;
        }
        if(b=="zamenik"){
            p=zamenik;
        }
        if(b=="sef"){
            p=sef;
        }


        for(auto i=iaa.begin(); i <iaa.end(); i++)
        {
            if(radnici[*i]->getPrezime()==a||radnici[*i]->getPrezime()==a)
            {
                (radnici[*i])->setPozicija(p);

            }
        }


    }




};

#endif // FIRMA_HPP_INCLUDED
