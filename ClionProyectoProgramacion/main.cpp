#include <iostream>

using namespace std;

#include "Cliente.h"

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
            cout << "ESTADO (ingrese 1 para activo, 0 para inactivo): " << endl;
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

void mostrarclientes(Cliente *clientes) {
    for (int i = 0; i < 100; i++) {
        if (clientes[i].getantiguedad() != -1) {
            cout << "--------------" << endl;
            clientes[i].imprimircliente();
        }
    }
}

void mostrarUNcliente(Cliente *clientes) {
    int i;
    cout << "Ingrese el numero del cliente que quiere ver: ";
    cin >> i;
    clientes[i].imprimircliente();
}

void extraccion(Cliente c2) {
    float cinmonto;
    int cinnumtransaccion, cindia, cinmes, cinanio, i;
    cout << "EXTRAER DINERO" << endl;
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
    //clientes[i].extraccion(cinnumtransaccion, cinmonto, cindia, cinmes, cinanio);
    c2.extraccion(cinnumtransaccion, cinmonto, cindia, cinmes, cinanio);
}


int main() {
    int cinnumcliente, cinestado, cinantiguedad, cinlimite, cinnumtransaccion, cindia, cinmes, cinanio;
    float cinmonto;
    string cincategoria;
    string cinnombre, cinapellido;
    int opc;

    Cliente clientes[100];
    clientes[0] = Cliente(0, "juan", "perez", 1, 1980, 40);
    Cliente c2(1, "osvaldo", "gomez", 1, 2000, 80);

    /*
    cout << "EXTRAER DINERO" << endl;
    cout << "Monto a extraer: ";
    cin >> cinmonto;
    cout << "Num transaccion " ;
    cin >> cinnumtransaccion;
    cout << "Dia: " ;
    cin >> cindia;
    cout << "Mes: " ;
    cin>> cinmes;
    cout << "Anio: ";
    cin>> cinanio;
    c2.extraccion(cinnumtransaccion,cinmonto,cindia,cinmes,cinanio);
    cout << endl;
    cout << "cliente 2" << endl;
    cout << c2.getnumcliente() << endl;
    cout << c2.getnombre() << endl;
    cout << c2.getapellido() << endl;
    cout << c2.getestado() << endl;
    cout << c2.getantiguedad() << endl;
    cout << c2.getsaldo();
    */

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
                break;
            case 3:
                extraccion(c2);
                break;
            case 4:
                /*cout << "DEPOSITAR DINERO " << endl;
                 cout << "Monto a depositar:";
                 cin >> cinmonto;
                 c2.deposito();
                 cout << endl;
                 cout << "cliente 2" << endl;
                 cout << c2.getnumcliente() << endl;
                 cout << c2.getnombre() << endl;
                 cout << c2.getapellido() << endl;
                 cout << c2.getestado() << endl;
                 cout << c2.getantiguedad() << endl;
                 cout << c2.getsaldo();*/
                return 0;
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
                break;
            case 8:
                cout << "El programa se cerrara" << endl;
                return 0;
        }
    }
}

