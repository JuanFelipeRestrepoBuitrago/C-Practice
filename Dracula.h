//
// Created by Usuario on 25/08/2022.
//

#ifndef CLASE3POO_DRACULA_H
#define CLASE3POO_DRACULA_H
#include "Vampiro.h"
#include "string"
using namespace std;


class Dracula: public Vampiro{
private:
    int estatura;
public:
    void aguantarSol();
    Dracula(string nombre, int edad, int estatura);
    int getEstatura();
    void setEstatura(int estatura);

};


#endif //CLASE3POO_DRACULA_H
