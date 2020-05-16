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
    //citajTxt("radnici.txt");
    //Cilj mog projekta je simulacija baze podataka jedne firme.Ta simulacija ce sadrzati padajuci meni svih desavanja u firmi  takodje bazi podataka mogu da pristupe samo vlasnik i menadzer koji ce dodavati razne opcije naprimer isporuke,menjati reklame,menjati ambalazu,menjati sastojke cokalade itd...
    Firma pa("Milka",453214,2007);
    Radnik r("Mladen","Mirosavljev",true,poslovodja);
    Radnik a("Nikola", "Pasic", true,vozac);
    Radnik s("Vesna", "Nikolic", false,zamenik);
    Vlasnik g(150000,"Mihajlo", "Malinovic", true,sef);
    Menager l("Andjela", "Puzic",false ,menager, 3);
    pa.dodavanje(r);
    pa.dodavanje(a);
    pa.dodavanje(s);
    pa.dodavanje(g);
    pa.dodavanje(l);
    pa.ispis();
    pa.brisanje();
    pa.ispis();
    pa.pretraga("vozac");
    return 0;

}
