//
// Created by BANGHO on 26/05/2023.
//

#include "black.h"

void black::setlimiteblack(int _limiteblack) {
    limiteblack=_limiteblack;
}

int black::getlimiteblack() {
    return limiteblack;
}

black::black(): Cliente(){
    limiteblack=-1;
};

black::black(int _numcliente, string _nombre, string _apellido, int _estado, int _antiguedad, float _saldo, int _limiteblack)
    : Cliente(_numcliente, _nombre, _apellido, _estado ,_antiguedad, _saldo) {
    limiteblack = _limiteblack;
}