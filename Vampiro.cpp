//
// Created by Usuario on 25/08/2022.
//

#include "Vampiro.h"
#include "iostream"
using namespace std;

Vampiro::Vampiro(std::string nombre, int edad) {
    this -> nombre = nombre;
    this -> edad = edad;
}

void Vampiro::morder() {
    cout << "Vampiro mordiendo..." << endl;
}

void Vampiro::chuparSangre() {
    cout << "Vampiro alimentandose..." << endl;
}

void Vampiro::aguantarSol() {
    cout << "El sol no me hace daño (" + this -> nombre + ")" << endl;
}

void Vampiro::volar() {
    cout << "Vampiro volando..." << endl;
}

void Vampiro::dormirColgado() {
    cout << "Vampiro durmiendo..." <<endl;
}
