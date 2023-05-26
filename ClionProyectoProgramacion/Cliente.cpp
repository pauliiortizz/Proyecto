//
// Created by sofis on 5/21/2023.
//
#include <iostream>

using namespace std;

#include "Cliente.h"

#pragma once

void Cliente::setnumcliente(int _numcliente) {
    numcliente = _numcliente;
}

int Cliente::getnumcliente() {
    return numcliente;
}

void Cliente::setnombre(std::string _nombre) {
    nombre = _nombre;
}

string Cliente::getnombre() {
    return nombre;
}

void Cliente::setapellido(string _apellido) {
    apellido = _apellido;
}

string Cliente::getapellido() {
    return apellido;
}

void Cliente::setestado(int _estado) {
    estado = _estado;
}

int Cliente::getestado() {
    return estado;
}

void Cliente::setantiguedad(int _antiguedad) {
    antiguedad = _antiguedad;
}

int Cliente::getantiguedad() {
    return antiguedad;
}

void Cliente::setlimite(int _limite) {
    limite = _limite;
}

int Cliente::getlimite() {
    return limite;
}

void Cliente::setsaldo(float _saldo) {
    saldo = _saldo;
}

float Cliente::getsaldo() {
    return saldo;
}

Cliente::Cliente() {
    numcliente = 0;
    nombre = "";
    apellido = "";
    estado = 0;
    antiguedad = -1;
    limite = 0;
    saldo = 0;
    Transaccion();
}

Cliente::Cliente(int _numcliente, std::string _nombre, std::string _apellido, int _estado, int _antiguedad, float _saldo) {
    numcliente = _numcliente;
    nombre = _nombre;
    apellido = _apellido;
    estado = _estado;
    antiguedad = _antiguedad;
    saldo = _saldo;
}

void Cliente::extraccion(int _numtransaccion, float _monto, int _dia, int _mes, int _anio) {
    int i;
    for (i=0; i<100; i++){
        if (transacciones[i].getanio()==-1) {
            transacciones[i] = Transaccion(i, _monto, _dia, _mes, _anio);
            transacciones[i].setcategoria("E");
            while (transacciones[i].getmonto() > getsaldo()) {
                cout << "No cuenta con ese monto de dinero en su cuenta, ingrese otro monto" << endl;
                cout << "Su saldo actual es: " << saldo;
                break;
            }
            if (transacciones[i].getmonto() <= getsaldo()) {
                setsaldo(getsaldo() - transacciones[i].getmonto());
                cout << "Su saldo actual es: " << saldo;
            }
        }
        break;
    }

}

void Cliente::deposito(int _numtransaccion, float _monto, int _dia, int _mes, int _anio) {
    int i;
    for(i=0; i<100; i++){
        transacciones[i]=Transaccion (_numtransaccion, _monto, _dia, _mes, _anio);
    }
    transacciones[i].setcategoria("D");
    while (transacciones[i].getmonto() <= 0) {
        cout << "Ingrese un monto valido para depositar" << endl;
        cout << "Su saldo actual es: " << saldo;
    }
    if (transacciones[i].getmonto() >= getsaldo()) {
        setsaldo(getsaldo() + transacciones[i].getmonto());
        cout << "Su saldo actual es: " << saldo;
    }
}

void Cliente::imprimircliente() {
    cout << "Numero de cliente:" << numcliente << endl;
    cout << "NOMBRE:" << nombre << endl;
    cout << "APELLIDO:" << apellido << endl;
    if (estado == 1) {
        cout << "ESTADO: Activo" << endl;
    } else if (estado == 0) {
        cout << "ESTADO: Inactivo" << endl;
    }
    cout << "ANTIGUEDAD:" << antiguedad << endl;
    cout << "SALDO:" << saldo << endl;
}


