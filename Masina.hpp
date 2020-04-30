#ifndef MASINA_HPP_INCLUDED
#define MASINA_HPP_INCLUDED

class Masina{
protected:
    double struja;
    bool stanje;
public:
    Masina(){
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
