#include <iostream>
#include <fstream>
using namespace std;
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
    cout << "Proba projekta" << endl;
    //Cilj mog projekta je simulacija baze podataka jedne firme.Ta simulacija ce sadrzati padajuci meni svih desavanja u firmi  takodje bazi podataka mogu da pristupe samo vlasnik i menadzer koji ce dodavati razne opcije naprimer isporuke,menjati reklame,menjati ambalazu,menjati sastojke cokalade itd...
    return 0;
}
