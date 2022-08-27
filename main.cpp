#include <iostream>
#include "Dracula.h"
#include "AnimalBat.h"
using namespace std;

int main() {
    Dracula obj1 = Dracula("Vlad", 200, 190);

    obj1.morder();
    obj1.chuparSangre();
    obj1.dormirColgado();
    obj1.volar();
    obj1.aguantarSol();
    obj1.amamantar();

    AnimalBat obj2 = AnimalBat();

    obj2.dormirColgado();
    obj2.volar();
    obj2.comerFrutas();
    obj2.amamantar();


}

