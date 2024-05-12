#include "Maseur.h"

void Maseur::afisare() const{
    std::cout<<"Meserie: maseur";
    Angajati::afisare();
}
void Maseur::aptitudini() const{
    std::cout<<"Maseur-ul "<<this->Nume<<" este specializat pe grupa de muschi: "<<this->GrupaMuschi;
}