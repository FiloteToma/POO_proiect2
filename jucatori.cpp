#include "jucatori.h"
void Jucatori::afis()
{
    std::cout<<"Nume: "<<nume<<" , Salariu Club: "<< salariu_club;
}
const int& Jucatori::getSalariu()
{
    return salariu_club;
}