#ifndef MASINA_HPP_INCLUDED
#define MASINA_HPP_INCLUDED

class Masina
{
protected:
    int kilaza;
    bool stanje;
public:
    Masina(int kilaza1,bool stanje1)
    {
        kilaza=kilaza1;
        stanje=stanje1;
    }
    int getKilaza(){
    return kilaza;
    }
    void setKilaza(int a){
     kilaza=a;
    }
 void promenaStanja()
    {
        int s;
        int m;
        cout<<"ukoliko ocete da upalite masinu pritisnite 1 ukoliko ne pritisnite 0: ";
        cin>>s;
        if(s==true)
        {
            cout<<"masina je upaljena"<<endl;
            cout<<"upisite koliko cokolade ocete da proizvedete u kilogramima"<<endl;
            cin>>m;
            kilaza=kilaza+m;
            cout<<"Napravili  ste "<<m<<" kg cokolade"<<endl;
            cout<<"trenutno na stanju imate "<<kilaza<<" kg cokolade"<<endl;

        }
        else
        {
            cout<<"masina ne radi"<<endl;
        }

    }
};

#endif // MASINA_HPP_INCLUDED
