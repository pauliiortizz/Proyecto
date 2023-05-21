//
// Created by sofis on 5/21/2023.
//
#include <iostream>
using namespace std;
#include "Cliente.h"

void Cliente::setnumcliente(int _numcliente) {
    numcliente=_numcliente;
}

int Cliente::getnumcliente() {
    return numcliente;
}

void Cliente::setnombre(std::string _nombre) {
    nombre=_nombre;
}

string Cliente::getnombre() {
    return nombre;
}

void Cliente::setapellido(string _apellido) {
    apellido=_apellido;
}

string Cliente::getapellido() {
    return apellido;
}

void Cliente::setestado(int _estado) {
    estado=_estado;
}

int Cliente::getestado() {
    return estado;
}

void Cliente::setantiguedad(int _antiguedad) {
    antiguedad=_antiguedad;
}

int Cliente::getantiguedad(){
    return antiguedad;
}

void Cliente::setlimite(int _limite){
    limite=_limite;
}

int Cliente::getlimite() {
    return limite;
}

Cliente::Cliente() {
    numcliente=0;
    nombre="";
    apellido="";
    estado=0;
    antiguedad=0;
    limite=0;
    Transaccion();
}

Cliente::Cliente(int _numcliente, std::string _nombre, std::string _apellido, int _estado, int _antiguedad){
    numcliente=_numcliente;
    nombre=_nombre;
    apellido=_apellido;
    estado=_estado;
    antiguedad=_antiguedad;
}