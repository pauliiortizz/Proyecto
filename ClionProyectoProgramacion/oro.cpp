//
// Created by BANGHO on 26/05/2023.
//

#include "oro.h"

void oro::setlimiteoro(int _limiteoro) {
    limiteoro=_limiteoro;
}
int oro::getlimiteoro() {
    return limiteoro;
}

oro::oro(): Cliente(){
    limiteoro=-1;
};

oro::oro(int _numcliente, string _nombre, string _apellido, int _estado, int _antiguedad, float _saldo, int _limiteoro)
        : Cliente(_numcliente, _nombre, _apellido, _estado ,_antiguedad, _saldo) {
    limiteoro = _limiteoro;
}