//
// Created by Usuario on 25/08/2022.
//

#include "Dracula.h"
using namespace std;

Dracula::Dracula(std::string nombre, int edad, int estatura): Vampiro(nombre, edad) {
    this -> estatura = estatura;
}

int Dracula::getEstatura() {
    return this -> estatura;
}

void Dracula::setEstatura(int heigth) {
    this -> estatura = heigth;
}

void Dracula::aguantarSol() {
    Vampiro::aguantarSol();
}




