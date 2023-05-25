//
// Created by sofis on 5/21/2023.
//
#include <iostream>
#include "Transaccion.h"
using namespace std;

class Cliente {
protected:
    //Atributos
    int numcliente;
    string nombre;
    string apellido;
    int estado; //1 activo 0 de baja
    int antiguedad;
    int limite;
    float saldo;
public:
    Transaccion transacciones;
    void setnumcliente (int _numcliente);
    int getnumcliente();
    void setnombre(string _nombre);
    string getnombre();
    void setapellido(string _apellido);
    string getapellido();
    void setestado(int _estado);
    int getestado();
    void setantiguedad(int _antiguedad);
    int getantiguedad();
    void setlimite (int _limite);
    int getlimite ();
    void setsaldo (float _saldo);
    float getsaldo ();

    //metodos especificos
    void imprimircliente ();
    void extraccion (int _numtransaccion, float _monto, int _dia, int _mes, int _anio);
    void deposito(int _numtransaccion, float _monto, int _dia, int _mes, int _anio);

    //Constructores
    Cliente ();
    Cliente (int _numcliente, string _nombre, string _apellido, int _estado, int _antiguedad, float _saldo);
};

