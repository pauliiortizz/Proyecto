#include <iostream>
using namespace std;
#include "Cliente.h"

int main() {
    int cinnumcliente, cinestado, cinantiguedad, cinlimite, cinnumtransaccion, cindia, cinmes, cinanio;
    float cinmonto;
    char cincategoria;
    string cinnombre, cinapellido;

    Cliente c1;
    Cliente c2(1, "osvaldo", "gomez", 1, 2000);

    cout << "cliente 1" << endl;
    cout << c1.getnumcliente() << endl;
    cout << c1.getnombre() << endl;
    cout << c1.getapellido() << endl;
    cout << c1.getestado() << endl;
    cout << c1.getantiguedad() << endl;
    cout << c1.transacciones.getcategoria();
    cout << c1.transacciones.getanio();

    cout << endl;
    cout << "cliente 2" << endl;
    cout << c2.getnumcliente() << endl;
    cout << c2.getnombre() << endl;
    cout << c2.getapellido() << endl;
    cout << c2.getestado() << endl;
    cout << c2.getantiguedad() << endl;

}

