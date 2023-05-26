//
// Created by BANGHO on 26/05/2023.
//
#include "Cliente.h"

class black : public Cliente {
private:
    int limiteblack;
public:
    void setlimiteblack(int _limiteblack);
    int getlimiteblack();

    //Constructor
    black();
    black(int _numcliente, string _nombre, string _apellido, int _estado, int _antiguedad, float _saldo, int _limiteblack);
};

