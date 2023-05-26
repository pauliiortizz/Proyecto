//
// Created by BANGHO on 26/05/2023.
//

#include "Cliente.h"

class oro : public Cliente {
private:
    int limiteoro;
public:
    void setlimiteoro(int _limiteoro);
    int getlimiteoro();

    //Constructor
    oro();
    oro(int _numcliente, string _nombre, string _apellido, int _estado, int _antiguedad, float _saldo, int _limiteoro);
};


