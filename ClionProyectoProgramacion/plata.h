//
// Created by BANGHO on 26/05/2023.
//

#include "Cliente.h"
class plata : public Cliente{
private:
    int limiteplata;
public:
    void setlimiteplata(int _limiteplata);
    int getlimiteplata();

    //Constructor
    plata ();
    plata (int _numcliente, string _nombre, string _apellido, int _estado, int _antiguedad, float _saldo, int _limiteplata);
};


