//
// Created by sofis on 5/21/2023.
//
#include <iostream>
using namespace std;
#include "Transaccion.h"

void Transaccion::setnumtransaccion(int _numtransaccion) {
    numtransaccion=_numtransaccion;
}
int Transaccion::getnumtransaccion() {
    return numtransaccion;
}
void Transaccion::setmonto(float _monto) {
    monto=_monto;
}
float Transaccion::getmonto(){
    return monto;
}
void Transaccion::setdia(int _dia) {
    dia=_dia;
}
int Transaccion::getdia(){
    return dia;
}
void Transaccion::setmes(int _mes) {
    mes=_mes;
}
int Transaccion::getmes() {
    return mes;
}
void Transaccion::setanio(int _anio) {
    anio=_anio;
}
int Transaccion::getanio() {
    return anio;
}
void Transaccion::setcategoria(string _categoria) {
    categoria=_categoria;
}
string Transaccion::getcategoria() {
    return categoria;
}

Transaccion::Transaccion() {
    numtransaccion = 0;
    monto = 0;
    dia = 0;
    mes = 0;
    anio = 0;
    categoria= 'C';
}

Transaccion::Transaccion(int _numtransaccion, float _monto, int _dia, int _mes, int _anio, string _categoria) {
    numtransaccion = _numtransaccion;
    monto = _monto;
    dia = _dia;
    mes = _mes;
    anio = _anio;
    categoria= _categoria;
}