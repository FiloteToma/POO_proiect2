#include "Bucatar.h"

void Bucatar::afisare() const{
    std::cout<<"Meserie: bucatar";
    Angajati::afisare();
}
void Bucatar::aptitudini() const{
    std::cout<<"Bucatarul "<<this->Nume<<" poate face "<<this->NumarPreparate<<" preparate!";
}
