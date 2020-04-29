#ifndef MAGACIN_HPP_INCLUDED
#define MAGACIN_HPP_INCLUDED
#include "Isporuka.hpp"
class MAGACIN
{
protected:
    int prostor;
    bool granica;
    ISPORUKA i;


public:
    MAGACIN(int prostor1,bool granica1,string mestoIzvoza1,string mestoUvoza1,int kilaza1):i(mestoIzvoza1,mestoUvoza1,kilaza1)
    {
    }

};

#endif // MAGACIN_HPP_INCLUDED
