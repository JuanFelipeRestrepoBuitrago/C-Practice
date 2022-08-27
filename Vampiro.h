//
// Created by Usuario on 25/08/2022.
//

#ifndef CLASE3POO_VAMPIRO_H
#define CLASE3POO_VAMPIRO_H
#include "string"
#include "Murcielago.h"

using namespace std;

class Vampiro: public Murcielago{
private:
    string nombre;
    int edad;
public:
    Vampiro(string nombre, int edad);
    void morder();
    void chuparSangre();
    void volar() override;
    void dormirColgado() override;
protected:
    virtual void aguantarSol();

};


#endif //CLASE3POO_VAMPIRO_H
