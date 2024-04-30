//
// Created by filot on 26.04.2024.
//

#include "jucatori.h"
void Jucatori::afis()
{
    std::cout<<"Nume: "<<nume<<" , Salariu Club: "<< salariu_club<<"Salariu_sponsor : "<<salariu_sponsor<<std::endl;
}
const int& Jucatori::getSalariu()
{
    return salariu_club;
}
