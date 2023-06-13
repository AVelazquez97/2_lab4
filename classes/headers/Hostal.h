#ifndef HOSTAL_H_
#define HOSTAL_H_
#include "../../datatypes/headers/DTHostal.h"
#include <iostream>
using namespace std;

class Hostal{
    private:
        string nombre;
        string direccion;
        string telefono;
    public:
        Hostal();
        Hostal(string nombre, string direccion, string telefono);
        Hostal(const Hostal &Hostal);
        ~Hostal();
        void set_nombre(string nombre);
        void set_direccion(string direccion);
        void set_telefono(string telefono);
        string get_nombre();
        string get_direccion();
        string get_telefono();
        DTHostal get_DT();
};

#endif // HOSTAL_H_