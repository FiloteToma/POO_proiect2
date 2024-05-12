#include "Jucator.h"

const int& Jucator::getSalariu() {
    return salariu;
}
void Jucator::afisare_pozitie() const {
    std::cout<<"Nume: "<<nume<<" , Salariu: "<< salariu<<std::endl;
};