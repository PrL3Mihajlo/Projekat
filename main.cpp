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
    Masina ma(0,true);
    Ambalaza a1("Ljubicasta","Milka","plastika");
    Radnik r("Mladen","Mirosavljev",true,poslovodja);
    Radnik r2("Nikola", "Pasic", true,vozac);
    Radnik r3("Vesna", "Nikolic", false,zamenik);
    Vlasnik v1(150000,"Mihajlo", "Malinovic", true,sef);
    Menager m1("Andjela", "Puzic",false,menager, 3);
    Radnik r4("Stefan","Kovanusic",true,radnik);
    Radnik r5("Ognjen","Bozic",true,vozac);
    Radnik r6("Tijana","Ostojic",false,poslovodja);
    Radnik r7("Ris","Strahinja",true,radnik);
    Radnik r8("Ilija","Tatalovic",true,vozac);
    Radnik r9("Filip","Vidakovic",true,vozac);
    Radnik r10("Ivona","Kabic",false,sef);
    Radnik r11("Sara","Kojic",false,zamenik);
    Radnik r12("Vasilije","Solaja",true,radnik);
    Radnik r13("Ivan","Radovanovic",true,poslovodja);
    pa.dodavanje(r);
    pa.dodavanje(r2);
    pa.dodavanje(r3);
    pa.dodavanje(v1);
    pa.dodavanje(m1);
    pa.dodavanje(r4);
    pa.dodavanje(r5);
    pa.dodavanje(r6);
    pa.dodavanje(r7);
    pa.dodavanje(r8);
    pa.dodavanje(r9);
    pa.dodavanje(r10);
    pa.dodavanje(r11);
    pa.dodavanje(r12);
    pa.dodavanje(r13);
    Isporuka o1("Srbija", "Bosna",15000,128);
    Isporuka o2("Srbija", "Bugarska",26000,128);
    Isporuka o3("Srbija", "Hrvatska",13299,128);

    pa.dodavanjeisporuke(o1);
    pa.dodavanjeisporuke(o2);
    pa.dodavanjeisporuke(o3);
    cout<<endl;
    cout<<endl;
    cout<<"Dobrodosli u bazu podataka firme za cokoladu"<<endl;
    cout<<endl;
    cout<<endl;


    cout<<"Da saznate podatke firme pritisnite 1 :"<<endl;
    cout<<"Da saznate listu radnika firme pritisnite 2: "<<endl;
    cout<<"Ukoliko zelite da zaposlite novog radnika pritisnite 3: "<<endl;
    cout<<"Da saznate listu isporuka firme pritisnite 4: "<<endl;
    cout<<"Da dodate novu isporuku u firmi pritisnite  5: "<<endl;
    cout<<"Ako zelite da vidite kasu firme nakon isporuke pritisnite 6: "<<endl;
    cout<<"Ako zelite da unapredite radnika pritisnite 7: "<<endl;
    cout<<"Ako zelite da proizvedete cokoladu pritisnite 8: "<<endl;
    cout<<"Da izadjete iz programa pritisnite 9: "<<endl;




    int m;
    do
    {

        cin>>m;
       int fflush();
        if(m==1){
            pa.informacije();
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
            cout<<"Da saznate podatke firme pritisnite 1 :"<<endl;
    cout<<"Da saznate listu radnika firme pritisnite 2: "<<endl;
    cout<<"Ukoliko zelite da zaposlite novog radnika pritisnite 3: "<<endl;
    cout<<"Da saznate listu isporuka firme pritisnite 4: "<<endl;
    cout<<"Da dodate novu isporuku u firmi pritisnite  5: "<<endl;
    cout<<"Ako zelite da vidite kasu firme nakon isporuke pritisnite 6: "<<endl;
    cout<<"Ako zelite da unapredite radnika pritisnite 7: "<<endl;
    cout<<"Ako zelite da proizvedete cokoladu pritisnite 8: "<<endl;
    cout<<"Da izadjete iz programa pritisnite 9: "<<endl;


        }

        if(m==2){
            pa.ispis();
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
            cout<<"Da saznate podatke firme pritisnite 1 :"<<endl;
    cout<<"Da saznate listu radnika firme pritisnite 2: "<<endl;
    cout<<"Ukoliko zelite da zaposlite novog radnika pritisnite 3: "<<endl;
    cout<<"Da saznate listu isporuka firme pritisnite 4: "<<endl;
    cout<<"Da dodate novu isporuku u firmi pritisnite  5: "<<endl;
    cout<<"Ako zelite da vidite kasu firme nakon isporuke pritisnite 6: "<<endl;
    cout<<"Ako zelite da unapredite radnika pritisnite 7: "<<endl;
    cout<<"Ako zelite da proizvedete cokoladu pritisnite 8: "<<endl;
    cout<<"Da izadjete iz programa pritisnite 9: "<<endl;


                }
        if(m==3){
            pa.ZaposliRadnika();
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
            cout<<"Da saznate podatke firme pritisnite 1 :"<<endl;
    cout<<"Da saznate listu radnika firme pritisnite 2: "<<endl;
    cout<<"Ukoliko zelite da zaposlite novog radnika pritisnite 3: "<<endl;
    cout<<"Da saznate listu isporuka firme pritisnite 4: "<<endl;
    cout<<"Da dodate novu isporuku u firmi pritisnite  5: "<<endl;
    cout<<"Ako zelite da vidite kasu firme nakon isporuke pritisnite 6: "<<endl;
    cout<<"Ako zelite da unapredite radnika pritisnite 7: "<<endl;
    cout<<"Ako zelite da proizvedete cokoladu pritisnite 8: "<<endl;
    cout<<"Da izadjete iz programa pritisnite 9: "<<endl;


        }
        if(m==4){
            //pa.ispisIsporuke();
            citajTxt("isporuke.txt");

            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
            cout<<"Da saznate podatke firme pritisnite 1 :"<<endl;
    cout<<"Da saznate listu radnika firme pritisnite 2: "<<endl;
    cout<<"Ukoliko zelite da zaposlite novog radnika pritisnite 3: "<<endl;
    cout<<"Da saznate listu isporuka firme pritisnite 4: "<<endl;
    cout<<"Da dodate novu isporuku u firmi pritisnite  5: "<<endl;
    cout<<"Ako zelite da vidite kasu firme nakon isporuke pritisnite 6: "<<endl;
    cout<<"Ako zelite da unapredite radnika pritisnite 7: "<<endl;
    cout<<"Ako zelite da proizvedete cokoladu pritisnite 8: "<<endl;
    cout<<"Da izadjete iz programa pritisnite 9: "<<endl;



        }
        if(m==5){
            pa.NovaIsporuka(ma);
            cout<<endl;
            cout<<"------------------------------------------------"<<endl;
            cout<<"Da saznate podatke firme pritisnite 1 :"<<endl;
    cout<<"Da saznate listu radnika firme pritisnite 2: "<<endl;
    cout<<"Ukoliko zelite da zaposlite novog radnika pritisnite 3: "<<endl;
    cout<<"Da saznate listu isporuka firme pritisnite 4: "<<endl;
    cout<<"Da dodate novu isporuku u firmi pritisnite  5: "<<endl;
    cout<<"Ako zelite da vidite kasu firme nakon isporuke pritisnite 6: "<<endl;
    cout<<"Ako zelite da unapredite radnika pritisnite 7: "<<endl;
    cout<<"Ako zelite da proizvedete cokoladu pritisnite 8: "<<endl;
    cout<<"Da izadjete iz programa pritisnite 9: "<<endl;




            }
         if(m==6){
           pa.KasaFirme();
           cout<<endl;
           cout<<"------------------------------------------------"<<endl;
           cout<<"Da saznate podatke firme pritisnite 1 :"<<endl;
    cout<<"Da saznate listu radnika firme pritisnite 2: "<<endl;
    cout<<"Ukoliko zelite da zaposlite novog radnika pritisnite 3: "<<endl;
    cout<<"Da saznate listu isporuka firme pritisnite 4: "<<endl;
    cout<<"Da dodate novu isporuku u firmi pritisnite  5: "<<endl;
    cout<<"Ako zelite da vidite kasu firme nakon isporuke pritisnite 6: "<<endl;
    cout<<"Ako zelite da unapredite radnika pritisnite 7: "<<endl;
    cout<<"Ako zelite da proizvedete cokoladu pritisnite 8: "<<endl;
    cout<<"Da izadjete iz programa pritisnite 9: "<<endl;


         }
         if(m==7){
           pa.UnaprediRadnika();
           cout<<endl;
           cout<<"------------------------------------------------"<<endl;
    cout<<"Ukoliko zelite da izadjete iz baze podataka firme pritisnite 0: "<<endl;
    cout<<"Da saznate podatke firme pritisnite 1 :"<<endl;
    cout<<"Da saznate listu radnika firme pritisnite 2: "<<endl;
    cout<<"Ukoliko zelite da zaposlite novog radnika pritisnite 3: "<<endl;
    cout<<"Da saznate listu isporuka firme pritisnite 4: "<<endl;
    cout<<"Da dodate novu isporuku u firmi pritisnite  5: "<<endl;
    cout<<"Ako zelite da vidite kasu firme nakon isporuke pritisnite 6: "<<endl;
    cout<<"Ako zelite da unapredite radnika pritisnite 7: "<<endl;
    cout<<"Ako zelite da proizvedete cokoladu pritisnite 8: "<<endl;
    cout<<"Da izadjete iz programa pritisnite 9: "<<endl;

         }
         if(m==8){
            ma.promenaStanja();
           cout<<endl;
           cout<<"------------------------------------------------"<<endl;
    cout<<"Da saznate podatke firme pritisnite 1 :"<<endl;
    cout<<"Da saznate listu radnika firme pritisnite 2: "<<endl;
    cout<<"Ukoliko zelite da zaposlite novog radnika pritisnite 3: "<<endl;
    cout<<"Da saznate listu isporuka firme pritisnite 4: "<<endl;
    cout<<"Da dodate novu isporuku u firmi pritisnite  5: "<<endl;
    cout<<"Ako zelite da vidite kasu firme nakon isporuke pritisnite 6: "<<endl;
    cout<<"Ako zelite da unapredite radnika pritisnite 7: "<<endl;
    cout<<"Ako zelite da proizvedete cokoladu pritisnite 8: "<<endl;
    cout<<"Da izadjete iz programa pritisnite 9: "<<endl;
         }
         if(m==9){
            exit(9);
         }

    }while(m!=0);
    pisiIsporuke("isporuke.txt",o1);
    pisiIsporuke("isporuke.txt",o2,'a');
    pisiIsporuke("isporuke.txt",o3,'a');
    return 0;

}
