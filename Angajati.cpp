#include "Angajati.h"

void Angajati::afisare() const {
    std::cout<<" | Nume: "<<Nume<<" | Salariu: "<<salariu<<std::endl;
}
int Angajati::getSalariu() const {
    return salariu;
}
const std::string& Angajati::getNume() const {
    return Nume;
}