#include "AntrenorSecund.h"

void AntrenorSecund::afisare() const {
    std::cout<<"Meserie: antrenor secund";
    Angajati::afisare();
}
void AntrenorSecund::aptitudini() const{
    std::cout<<"Antrenorul secund "<<this->Nume<<" a mai fost la "<<this->EchipeAntrenate<<" echipe inainte!";
}