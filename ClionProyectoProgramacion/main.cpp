#include <iostream>

#pragma once
using namespace std;

#include "Cliente.h"
#include "Transaccion.h"

void cargarcliente(Cliente *clientes) {
    string cnombre, capellido;
    int cnumcliente, cestado, cantiguedad;
    float csaldo;
    for (int i = 0; i < 100; i++) {
        if (clientes[i].getantiguedad() == -1) {
            cnumcliente = i;
            cout << "NOMBRE: ";
            cin >> cnombre;
            cout << "APELLIDO: ";
            cin >> capellido;
            cout << "ESTADO (ingrese 1 para activo, 0 para inactivo): ";
            cin >> cestado;
            while (cestado != 0 && cestado != 1) {
                cout << "Ingrese un estado valido: 1 para activo, 0 para inactivo" << endl << "ESTADO: ";
                cin >> cestado;
            }
            cout << "ANTIGUEDAD (ingrese el anio en el que creo la cuenta): ";
            cin >> cantiguedad;
            while (cantiguedad <= 1900 || cantiguedad > 2023) {
                cout << "ingrese un anio valido" << endl << "ANTIGUEDAD: ";
                cin >> cantiguedad;
            }
            cout << "SALDO (ingrese el saldo de la cuenta):  ";
            cin >> csaldo;
            while (csaldo < 0) {
                cout << "ingrese un saldo positivo" << endl << "SALDO: ";
                cin >> csaldo;
            }
            clientes[i] = Cliente(cnumcliente, cnombre, capellido, cestado, cantiguedad, csaldo);
            break;
        }
    }
}

void cambiarestado(Cliente *clientes) {
    string opc;
    int i;
    cout << "Ingrese el numero del cliente al que le quiere cambiar su estado: ";
    cin >> i;
    cout << "Se le cambiara el estado actual ";
    if (clientes[i].getestado() == 1) {
        cout << "(Activo)";
        clientes[i].setestado(0);
    } else if (clientes[i].getestado() == 0) {
        cout << "(Inactivo)";
        clientes[i].setestado(1);
    }
    cout << " al cliente " << clientes[i].getapellido() << ", " << clientes[i].getnombre() << endl;
    if (clientes[i].getestado() == 1) {
        cout << "NUEVO ESTADO: Activo" << endl;
    } else if (clientes[i].getestado() == 0) {
        cout << "NUEVO ESTADO: Inactivo" << endl;
    }
}

void mostrarclientes(Cliente *clientes) {
    for (int i = 0; i < 100; i++) {
        if (clientes[i].getantiguedad() != -1) {
            cout << "--------------" << endl;
            clientes[i].imprimircliente();
        }
    }
    cout << endl;
}

void mostrarUNcliente(Cliente *clientes) {
    int i;
    cout << "Ingrese el numero del cliente que quiere ver: ";
    cin >> i;
    clientes[i].imprimircliente();
    cout << endl;
}

void extraccion(Cliente *clientes, Transaccion *transacciones) {
    float cinmonto;
    int cinnumtransaccion, cindia, cinmes, cinanio, i;
    cout << endl;
    cout << "Ingrese el numero de cliente al cual desea realizar la extraccion de dinero: ";
    cin >> i;
    cout << "Monto a extraer: ";
    cin >> cinmonto;
    cout << "Num transaccion ";
    cin >> cinnumtransaccion;
    cout << "Dia: ";
    cin >> cindia;
    cout << "Mes: ";
    cin >> cinmes;
    cout << "Anio: ";
    cin >> cinanio;
    for (i = 0; i < 100; i++) {
        clientes[i].deposito(cinnumtransaccion, cinmonto, cindia, cinmes, cinanio);
        for (int j = 0; j < 100; j++) {
            if (transacciones[j].getanio() != -1) {
                transacciones[j] = Transaccion(cinnumtransaccion, cinmonto, cindia, cinmes, cinanio);
            }
            break;
        }
        break;
    }
    cout << endl;
}

void depositar(Cliente *clientes, Transaccion *transacciones) {
    float cinmonto;
    int cinnumtransaccion, cindia, cinmes, cinanio, i;
    cout << endl;
    cout << "Ingrese el numero de cliente al cual desea realizar el deposito de dinero: ";
    cin >> i;
    cout << "Monto a depositar: ";
    cin >> cinmonto;
    cout << "Num transaccion ";
    cin >> cinnumtransaccion;
    cout << "Dia: ";
    cin >> cindia;
    cout << "Mes: ";
    cin >> cinmes;
    cout << "Anio: ";
    cin >> cinanio;
    for (i = 0; i < 100; i++) {
        clientes[i].deposito(cinnumtransaccion, cinmonto, cindia, cinmes, cinanio);
        for (int j = 0; j < 100; j++) {
            if (transacciones[j].getanio() != -1) {
                transacciones[j] = Transaccion(cinnumtransaccion, cinmonto, cindia, cinmes, cinanio);
            }
            break;
        }
        break;
    }
    cout << endl;
}

void mostrartransacciones(Cliente *clientes, Transaccion *transacciones) {
    float cinmonto;
    int cinnumtransaccion, cindia, cinmes, cinanio, i;
    cout << "Ingrese el numero de cliente del cual desea ver sus transacciones: ";
    cin >> i;
    for (i = 0; i < 100; i++) {
        clientes[i].deposito(cinnumtransaccion, cinmonto, cindia, cinmes, cinanio);
        clientes[i].extraccion(cinnumtransaccion, cinmonto, cindia, cinmes, cinanio);
        for (int j = 0; j < 100; j++) {
            if (transacciones[j].getanio() != -1) {
                transacciones[j].imprimirtransacciones();
            }
            cout << endl;
            break;
        }
        break;
    }
}

int main() {
    string cincategoria;
    string cinnombre, cinapellido;
    int opc;

    Cliente clientes[100];
    Transaccion transacciones[100];
    clientes[0] = Cliente(0, "juan", "perez", 1, 1980, 40);
    Transaccion t3(1, 100, 1, 1, 2001);

    while (1) {
        cout << "---------MENU---------" << endl;
        cout << "1) Cargar cliente" << endl;
        cout << "2) Cambiar estado de cliente" << endl;
        cout << "3) Extraer dinero" << endl;
        cout << "4) Depositar dinero" << endl;
        cout << "5) Consultar cliente" << endl;
        cout << "6) Consultar todos los clientes" << endl;
        cout << "7) Transacciones de un cliente" << endl;
        cout << "8) Salir del Programa" << endl;
        cout << "Ingrese Opcion: ";
        cin >> opc;

        switch (opc) {
            case 1:
                cout << "CARGAR CLIENTE " << endl;
                cargarcliente(clientes);
                break;
            case 2:
                cout << "CAMBIAR ESTADO DE CLIENTE" << endl;
                cambiarestado(clientes);
                break;
            case 3:
                cout << "EXTRACCION DE DINERO" << endl;
                extraccion(clientes, transacciones);
                break;
            case 4:
                cout << "DEPOSITAR DINERO " << endl;
                depositar(clientes, transacciones);
                break;
            case 5:
                cout << "CONSULTAR CLIENTE" << endl;
                mostrarUNcliente(clientes);
                break;
            case 6:
                cout << "CONSULTAR TODOS LOS CLIENTES " << endl;
                mostrarclientes(clientes);
                break;
            case 7:
                cout << "TRANSACCIONES DE UN CLIENTE" << endl;
                mostrartransacciones(clientes, transacciones);
                break;
            case 8:
                cout << "El programa se cerrara" << endl;
                return 0;
        }
    }
}

