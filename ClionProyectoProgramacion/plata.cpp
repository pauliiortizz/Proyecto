//
// Created by BANGHO on 26/05/2023.
//

#include "plata.h"

void plata::setlimiteplata(int _limiteplata) {
    limiteplata=_limiteplata;
}

int plata::getlimiteplata() {
    return limiteplata;
}

plata::plata(): Cliente(){
    limiteplata=-1;
};

plata::plata(int _numcliente, string _nombre, string _apellido, int _estado, int _antiguedad, float _saldo, int _limiteplata)
        : Cliente(_numcliente, _nombre, _apellido, _estado ,_antiguedad, _saldo) {
    limiteplata = _limiteplata;
}