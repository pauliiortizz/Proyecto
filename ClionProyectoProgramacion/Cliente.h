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
    // string nivel
    int estado; //1 activo 0 de baja
    int antiguedad;
    int limite;
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

    //Constructores
    Cliente ();
    Cliente (int _numcliente, string _nombre, string _apellido, int _estado, int _antiguedad );
};

