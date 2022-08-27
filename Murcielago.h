//
// Created by Usuario on 25/08/2022.
//

#ifndef CLASE3POO_MURCIELAGO_H
#define CLASE3POO_MURCIELAGO_H
#pragma once

#endif //CLASE3POO_MURCIELAGO_H

#include "iostream"
#include "Mamifero.h"

using namespace std;

class Murcielago: public Mamifero{
public:
    virtual void volar() = 0;
    virtual void comerFrutas();
    virtual void dormirColgado() = 0;
};
