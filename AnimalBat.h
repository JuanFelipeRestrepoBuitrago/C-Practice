//
// Created by Usuario on 27/08/2022.
//

#ifndef CLASE3POO_ANIMALBAT_H
#define CLASE3POO_ANIMALBAT_H

#include "Murcielago.h"

class AnimalBat: public Murcielago {
public:
    void volar() override;
    void dormirColgado() override;
};


#endif //CLASE3POO_ANIMALBAT_H
