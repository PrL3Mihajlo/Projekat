#include <iostream>
#include <fstream>
using namespace std;
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
//Profesorka ne znam iz kog razloga mi ne rade includovi u main-u izbacuje mi gresku kao da ne postoje fajlove i ne radi mi kad ih ubacim u main
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
    citajTxt("radnici.txt");
    Radnik r("x","y",true,radnik);
    //Cilj mog projekta je simulacija baze podataka jedne firme.Ta simulacija ce sadrzati padajuci meni svih desavanja u firmi  takodje bazi podataka mogu da pristupe samo vlasnik i menadzer koji ce dodavati razne opcije naprimer isporuke,menjati reklame,menjati ambalazu,menjati sastojke cokalade itd...
    return 0;
}
