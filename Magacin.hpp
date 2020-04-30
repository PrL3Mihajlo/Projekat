#ifndef MAGACIN_HPP_INCLUDED
#define MAGACIN_HPP_INCLUDED
#include "Isporuka.hpp"
class Magacin
{
protected:
    int prostor;
    bool granica;
    Isporuka i;


public:
    Magacin(int prostor1,bool granica1,string mestoIzvoza1,string mestoUvoza1,int kilaza1):i(mestoIzvoza1,mestoUvoza1,kilaza1)
    {
    }

};

#endif // MAGACIN_HPP_INCLUDED
