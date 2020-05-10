#ifndef MASINA_HPP_INCLUDED
#define MASINA_HPP_INCLUDED

class Masina{
protected:
    double struja;
    bool stanje;
public:
    Masina(double struja1,bool stanje1){
    struja=struja1;
    stanje=stanje1;
    }
    void promena_stanja(){
    if(stanje==true){
        struja=100;
        cout<<"masina je upaljena"<<endl;

    }
    else{
        struja=0;
        cout<<"masina ne radi"<<endl;
    }

    }
};

#endif // MASINA_HPP_INCLUDED
