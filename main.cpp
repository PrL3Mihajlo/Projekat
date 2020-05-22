#include <iostream>
#include <fstream>
using namespace std;
#include <vector>
#include "Firma.hpp"
#include "Radnici.hpp"
#include "Vlasnik.hpp"
#include "Cokolada.hpp"
#include "Sirovine.hpp"
#include "Isporuka.hpp"
#include "Magacin.hpp"
#include "Masina.hpp"
#include "Menager.hpp"
#include "Ambalaza.hpp"
#include "Reklama.hpp"
int Isporuka::broj_isporuka=0;
void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";


}




int main()
{







    Firma pa("Milka",453214,2007,10000);
    Radnik r("Mladen","Mirosavljev",true,poslovodja);
    Radnik a("Nikola", "Pasic", true,vozac);
    Radnik s("Vesna", "Nikolic", false,zamenik);
    Vlasnik g(150000,"Mihajlo", "Malinovic", true,sef);
    Menager l("Andjela", "Puzic",false,menager, 3);
    pa.dodavanje(r);
    pa.dodavanje(a);
    pa.dodavanje(s);
    pa.dodavanje(g);
    pa.dodavanje(l);
    Isporuka o1("Srbija", "Bosna",15000,128);
    Isporuka o2("Srbija", "Bugarska",26000,128);
    Isporuka o3("Srbija", "Hrvatska",13299,128);

    pa.dodavanjeisporuke(o1);
    pa.dodavanjeisporuke(o2);
    pa.dodavanjeisporuke(o3);


    cout<<"Da saznate podatke firme pritisnite 1 :"<<endl;
        cout<<"Da saznate listu radnika firme pritisnite 2: "<<endl;
        cout<<"Da saznate listu isporuka firme pritisnite 3: "<<endl;
        cout<<"Da dodate novu isporuku u firmi pritisnite  4: "<<endl;
          cout<<"ako zelite da vidite kasu firme nakon isporuke pritisnite 5: "<<endl;



    int m;
    do
    {

        cin>>m;
        fflush;
        if(m==1){
            pa.informacije();
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
        }

        if(m==2){
            pa.ispis();
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;        }
        if(m==3){
            pa.ispisIsporuke();
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;

        }
        if(m==4){
            pa.NovaIsporuka();
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;


            }
         if(m==5){
           pa.KasaFirme();
           cout<<endl;
           cout<<"------------------------------------------------"<<endl;
         }


    }while(m!=0);
    pisiIsporuke("isporuke.txt",o1);
    pisiIsporuke("isporuke.txt",o2,'a');
    pisiIsporuke("isporuke.txt",o3,'a');
    return 0;

}
