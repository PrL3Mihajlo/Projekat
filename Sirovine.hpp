#ifndef SIROVINE_HPP_INCLUDED
#define SIROVINE_HPP_INCLUDED
enum vrsta{belancevine,masti,secer,protein};

class Sirovine{
protected:
    double procenat;
    vrsta v;
public:
    Sirovine(double procenat1, vrsta v1){
    procenat=procenat1;
    v=v1;

    }
    friend ostream& operator<<(ostream& izlaz, const Sirovine& s){

izlaz<<"Sirovine - ispis"<<endl;

izlaz<<"Procenat: "<<s.procenat<<endl;

izlaz<<"Vrsta:"<<s.v<<endl<<endl;

return izlaz;

}


};

#endif // SIROVINE_HPP_INCLUDED
